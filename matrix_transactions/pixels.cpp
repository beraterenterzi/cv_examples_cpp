#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat berat(640,480, CV_8UC1,Scalar(0,255,0));
    randu(berat,Scalar(0,255,0),Scalar(255,255,255))
    imshow("Hello", berat);
    
    waitKey(0);


}