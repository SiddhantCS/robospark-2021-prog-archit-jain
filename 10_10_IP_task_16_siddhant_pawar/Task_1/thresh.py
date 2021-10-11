import cv2

img = cv2.imread(r"D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\thresholding.jpeg")
img=cv2.resize(img,(500,500))

#Threshold
ret,simple_thresh= cv2.threshold(img,170,255,cv2.THRESH_BINARY)
ret,simple_thresh1= cv2.threshold(img,170,255,cv2.THRESH_BINARY_INV)
cv2.imshow("Original grayscale",img)
cv2.imshow("simple_thresh",simple_thresh)
cv2.imshow("simple_thresh_inv",simple_thresh1)
cv2.waitKey(0)


filename0 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\Output_Images\thresholding_thresh0.jpeg'
filename1 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\Output_Images\thresholding_thresh1.jpeg'
filename2 = r'D:\VIT\TRF\10_10_IP_task_16_siddhant_pawar\Task_1\Output_Images\thresholding_thresh2.jpeg'

#Save Images
cv2.imwrite(filename0,img)
cv2.imwrite(filename1,simple_thresh)
cv2.imwrite(filename2,simple_thresh1)


#End
cv2.waitKey(0)
cv2.destroyAllWindows()
