import numpy as np
import cv2

image = cv2.imread(r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_2\masking.jpg')
result = image.copy() # Copy Image
image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV) #Convert image to grayscale

#Masking for Red Color
lower = np.array([0,50,50])
upper = np.array([10,255,255])
mask1 = cv2.inRange(image, lower, upper)
result1 = cv2.bitwise_and(result, result, mask=mask1)

#Masking for Green Color
lower = np.array([40,40,40])
upper = np.array([70,255,255])
mask2 = cv2.inRange(image, lower, upper)
result2 = cv2.bitwise_and(result, result, mask=mask2)

#Masking for Blue Color
lower = np.array([100,100,100])
upper = np.array([130,255,255])
mask3 = cv2.inRange(image, lower, upper)
result3 = cv2.bitwise_and(result, result, mask=mask3)

#Dispaly
cv2.imshow('Red', result1)
cv2.imshow('Green',result2)
cv2.imshow('Blue',result3)

#Save Images
filename0 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_2\Output_Images\thresholding_thresh0.jpeg'
filename1 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_2\Output_Images\thresholding_thresh1.jpeg'
filename2 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_2\Output_Images\thresholding_thresh2.jpeg'

cv2.imwrite(filename0,result1)
cv2.imwrite(filename1,result2)
cv2.imwrite(filename2,result3)

#End
cv2.waitKey()
cv2.destroyAllWindows()