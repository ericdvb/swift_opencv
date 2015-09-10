//
//  Cam.cpp
//  swift_opencv
//
//  Created by Eric Willenson on 8/29/15.
//  Copyright (c) 2015 Eric Willenson. All rights reserved.
//

#include "Cam.h"
#include <opencv2/opencv.hpp>

int Cam::showCam(){
    cv::VideoCapture capture(0); // open default camera
    if ( capture.isOpened() == false )
        return -1;
    cv::namedWindow("Test OpenCV",1);
    cv::Mat frame;
    while ( true )
    {
        capture >> frame;
        cv::imshow("Test OpenCV", frame );
        int key = cv::waitKey(1);
        if ( key == 27 )
            break;
    }
    return 0;
}