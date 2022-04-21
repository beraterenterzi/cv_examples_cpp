#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat goruntu(450,450, CV_8UC3,Scalar(255,0,0));
    goruntu.colRange(110,150).setTo(CV_8UC1);
    goruntu.rowRange(110,150).setTo(Scalar(0,0,255));
    imshow("Hello", goruntu);

    waitKey(0);


}