from cvzone.HandTrackingModule import HandDetector
import cv2
import numpy as np 

gestures=['forward','backward','right','left']

detector = HandDetector(staticMode=False,
                         maxHands=2, 
                         modelComplexity=1, 
                         detectionCon=0.5, 
                         minTrackCon=0.5) 



def get_gesture(img):
        # Find hands in the current frame
        # The 'draw' parameter draws landmarks and hand outlines on the image if set to True
        # The 'flipType' parameter flips the image, making it easier for some detections
        hands, img = detector.findHands(img, draw=True, flipType=True)


        gestures={'hand0_fin_idx':[],
                  'hand0_bbox':[],
                  'hand1_fin_idx':[],
                  'hand1_bbox':[]}

        if hands:
                hand0=hands[0]
                gestures['hand0_fin_idx']=detector.fingersUp(hand0) # list of finger (starting from thumb)
                gestures['hand0_bbox']=hand0['bbox']
                

                

                if len(hands)==2:
                        hand1=hands[1]
                        gestures['hand1_fin_idx']=detector.fingersUp(hand1) # list of finger (starting from thumb)
                        gestures['hand1_bbox']=hand1['bbox']
                        
        
        return img,gestures
        

# if __name__=='__main__':
#         print('hello sir')
#         # stream_url = 'http://192.168.0.118:8080/stream'
#         # cap = cv2.VideoCapture(stream_url)

#         cap = cv2.VideoCapture('gesture.mp4')
#         if not cap.isOpened():
#                 print('Error: Can\'t load image from camera ') 
#         else:

#                 while cap.isOpened():
#                         success,frame=cap.read()

                        

#                         if not success:
#                                 break

#                         frame=cv2.flip(frame,1)
#                         img,num_finger,bbox=get_gesture(frame)

#                         if num_finger is None:
#                                 print('No hand detected')

#                         else:
#                                 print('number of fringer detected: {}'.format(len(num_finger)))

#                                 cv2.putText(img, gestures[len(num_finger)], (bbox[0] - 30, bbox[1] - 30), cv2.FONT_HERSHEY_PLAIN,
#                                      2, (255, 0, 255), 2)

#                         cv2.imshow('frame',img)

#                         if cv2.waitKey(1) & 0xFF == ord('q'):
#                                 break

        
#         cap.release()
#         cv2.destroyAllWindows()




