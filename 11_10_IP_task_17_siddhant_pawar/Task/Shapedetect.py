import cv2

img = cv2.imread('vllCR.png')
#Convert Image to grayscale
imgGry = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# setting threshold of gray image
ret , thrash = cv2.threshold(imgGry, 235 , 255, cv2.CHAIN_APPROX_NONE)

# using a findContours() function
contours , hierarchy = cv2.findContours(thrash, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)



for contour in contours:
    approx = cv2.approxPolyDP(contour, 0.01* cv2.arcLength(contour, True), True)
    cv2.drawContours(img, [approx], 0, (0, 0, 0), 7)
    # x = approx.ravel()[1]
    # y = approx.ravel()[0] - 5
    M = cv2.moments(contour)
    #Positioning of shapes
    if M['m00'] != 0.0:
        x = int(M['m10'] / M['m00'])
        y = int(M['m01'] / M['m00'])

    if len(approx) == 3:
        cv2.putText( img, "Triangle S-3", (x-75, y), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 0),2)
        print('Traingle:Sides:3')
    elif len(approx) == 4 :
        x, y , w, h = cv2.boundingRect(approx)
        aspectRatio = float(w)/h
        print(aspectRatio)
        if aspectRatio >= 0.95 and aspectRatio < 1.05:
            cv2.putText(img, "Square S-4", (x+90, y+180), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 0),2)
            print('Square:Sides:4')

        else:
            cv2.putText(img, "Rectangle S-4", (x+120, y+150), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 0),2)
            print('Rectangle:Sides:4')

    elif len(approx) == 5 :
        cv2.putText(img, "Pentagon S-5", (x-70, y), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 0),2)
        print('Pentagon:Sides:5')
    else:
        cv2.putText(img, "Circle S-0", (x-50, y-20), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 0), 2)
        print('Circle:Side:0')

# eccentricity is zero, the curve is a circle;
# if equal to one, a parabola; if less than one, an ellipse;
# and if greater than one, a hyperbola.

#Display
cv2.imshow('shapes', img)

#Save Image
filename = r'D:\VIT\TRF\11_10_IP_task_17_siddhant_pawar\Output_Image\Shapes_detected.jpeg'

cv2.imwrite(filename,img)

#End
cv2.waitKey(0)
cv2.destroyAllWindows()