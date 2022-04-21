#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat goruntu(450,450, CV_8UC3,Scalar(255,0,0));

    line(goruntu,Point(90,105),Point(410,400), Scalar(255,255,255), 2);

    imshow("Hello", goruntu);

    waitKey(0);


}