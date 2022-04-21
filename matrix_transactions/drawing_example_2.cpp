#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat goruntu(450,450, CV_8UC3,Scalar(255,0,0));

    circle(goruntu,Point(90,350), 70, Scalar(255,255,255), 4);

    imshow("Hello", goruntu);

    waitKey(0);


}