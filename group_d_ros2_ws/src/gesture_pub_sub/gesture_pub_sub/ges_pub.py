import rclpy
from rclpy.node import Node
import numpy as np

import cv2
from .gesture_detector import get_gesture # importing pose_module function
from gesture_interface.msg import GestureTopic
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
import os
import click

class ges_pub(Node):

    def __init__(self):
        super().__init__('gesture_publisher')
        self.publisher_ = self.create_publisher(GestureTopic, 'gesture_topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.gesture_callback)
        self.gestures_0=['forward','backward'] 
        self.gestures_1=['right','left'] # When there is no gesture the robot will stop
        self.br = CvBridge()

        self.gestture_msg=GestureTopic()
        self.vdo_adr='video/test.mp4'
        self.cap = cv2.VideoCapture(self.vdo_adr)  
    

    def gesture_callback(self):


        # Check if video opened successfully
        if not self.cap.isOpened():
            print("Error: Could not open video.")
            exit()

        # Read the video frame by frame
        while self.cap.isOpened():
            ret, frame = self.cap.read()

        # Check if frame is not read properly
            if not ret:
                print("Can't receive frame (stream end?). Exiting ...")
                break

        
        

            frame=cv2.flip(frame,1)
            img,gestures=get_gesture(frame)
            hand0_fin_idx=gestures['hand0_fin_idx']## only finger idx 1 and 2 will be used
            hand0_bbox=gestures['hand0_bbox']
            hand1_fin_idx=gestures['hand1_fin_idx']  ## only finger idx 1 and 2 will be used
            hand1_bbox=gestures['hand1_bbox']



            if len(hand0_fin_idx)==0 and len(hand1_fin_idx)==0: ## if no hands is detected then then no control will be provided
                    self.gestture_msg.angular_motion='stop'
                    self.gestture_msg.linear_motion='stop'
                    self.publisher_.publish(self.gestture_msg)
                    self.get_logger().info('Publishing Gesture Command: Robot to move : {}'.format("No Command Yet"))
                    
            else:
                    
                
                    if len(hand1_fin_idx)==0: # When only one hand is included  then it is used for linear_motion which is 'forward', 'backward'
                        hand0_fin_idx=[hand0_fin_idx[i] for i in [1,2]]

                        if hand0_fin_idx[0]==1 and hand0_fin_idx[1]==1: # if both finger is detected that means forward and backward at same time; so, it will be stop
                            self.gestture_msg.linear_motion='stop'
                        elif hand0_fin_idx[0]==1:
                            self.gestture_msg.linear_motion='forward' # thumb finger for forward
                        elif hand0_fin_idx[1]==1:
                            self.gestture_msg.linear_motion='backward'  #index finger for backward
                        cv2.putText(img, self.gestture_msg.linear_motion, ( hand0_bbox[0] - 30,  hand0_bbox[1] - 30), cv2.FONT_HERSHEY_PLAIN,
                            2, (255, 0, 255), 2)
                        
                        self.gestture_msg.angular_motion='stop'

                        
                    
                        
                        self.publisher_.publish(self.gestture_msg)
                        self.get_logger().info('Publishing Gesture Command: Linear Motion : {} /t Angular Motion: {}'.format(self.gestture_msg.linear_motion,self.gestture_msg.angular_motion))

                    else: # if both hand are detected then first hand is for Linear motion and second hand is for angular motion
                        hand0_fin_idx=[hand0_fin_idx[i] for i in [0,1]]
                        hand1_fin_idx=[hand1_fin_idx[i] for i in [0,1]]
                        if hand0_fin_idx[0]==1 and hand0_fin_idx[1]==1: # this is describe in above
                            self.gestture_msg.linear_motion='stop'
                        elif hand0_fin_idx[0]==1:
                            self.gestture_msg.linear_motion='forward'
                        elif hand0_fin_idx[1]==1:
                            self.gestture_msg.linear_motion='backward'
                        
                        cv2.putText(img, self.gestture_msg.linear_motion, ( hand0_bbox[0] - 30,  hand0_bbox[1] - 30), cv2.FONT_HERSHEY_PLAIN,
                            2, (255, 0, 255), 2)


                        if hand1_fin_idx[0]==1 and hand1_fin_idx[1]==1: # if both thumb and index fingers are "Up" ed then no angular motion
                            self.gestture_msg.angular_motion='stop'
                        elif hand1_fin_idx[0]==1:
                            self.gestture_msg.angular_motion='right'
                        elif hand1_fin_idx[1]==1:
                            self.gestture_msg.angular_motion='left'
                        
                        cv2.putText(img, self.gestture_msg.angular_motion, ( hand1_bbox[0] - 30,  hand1_bbox[1] - 30), cv2.FONT_HERSHEY_PLAIN,
                            2, (255, 0, 255), 2)


                    
                    
                
                    
                    self.publisher_.publish(self.gestture_msg)
                    self.get_logger().info('Publishing Gesture Command: Linear Motion : {} /t Angular Motion: {}'.format(self.gestture_msg.linear_motion,self.gestture_msg.angular_motion))

            
            cv2.imshow('frame',img)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break


        

        # Closes all the frames
        




click.echo(click.style('Running Gesture Publisher', fg='green'))

def main(args=None):
    try:
        rclpy.init(args=args)
        gesture_publisher = ges_pub()
        rclpy.spin(gesture_publisher)
    except Exception as e:
        print(f"An error occurred: {e}")  # Print the error message
    finally:
        # Ensure resources are released and the node is shut down properly
        
        
        gesture_publisher.cap.release()
        cv2.destroyAllWindows()
        gesture_publisher.destroy_node()
        rclpy.shutdown()



if __name__ == '__main__':
    main()