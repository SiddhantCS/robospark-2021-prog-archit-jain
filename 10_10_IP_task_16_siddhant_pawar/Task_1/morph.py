import cv2
import numpy as np

#Reading input image
img = cv2.imread(r"D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\morphology.JPG")

#Taking a matrix of size 5 as the kernel
kernel = np.ones((5,5), np.uint8)

#Erosion
img_erosion = cv2.erode(img,kernel,iterations=1)

#Dilation
img_dilation = cv2.dilate(img_erosion,kernel,iterations=1)

#Display Image
cv2.imshow('Test', img)
cv2.imshow('Erosion', img_erosion)
cv2.imshow('Dilation', img_dilation)

#Save Image
filename0 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\Output_Images\morphology_morph0.jpeg'
filename1 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\Output_Images\morphology_morph1.jpeg'
filename2 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\Output_Images\morphology_morph2.jpeg'

cv2.imwrite(filename0,img)
cv2.imwrite(filename1,img_erosion)
cv2.imwrite(filename2,img_dilation)

cv2.waitKey(0)
cv2.destroyAllWindows()