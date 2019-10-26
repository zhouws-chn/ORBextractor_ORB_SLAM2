#include <iostream>
#include <opencv2/opencv.hpp>

#include "ORBextractor.h"
using namespace std;
using namespace cv;
using namespace ORB_SLAM2;

int main( int argc, char **argv ) {

    std::cout<<"ORBextractor is ready to run!"<<std::endl;

    cv::Mat srcImg,grayImg;
    srcImg = imread("../test.jpg");
    imshow("srcImg", srcImg);
    cvtColor(srcImg,grayImg,CV_BGR2GRAY);
    imshow("gray_image", grayImg);

    ORBextractor orb_extractor(500, 1.2, 8, 20, 7 );
    cv::Mat mDescriptors;
    std::vector<cv::KeyPoint> mvKeys;

    orb_extractor( grayImg,cv::Mat(),mvKeys,mDescriptors);

    cv::Mat image1;
    drawKeypoints(grayImg, mvKeys, image1);
    imshow("orb_extractor result", image1);

    waitKey(0);
    return 0;
}
