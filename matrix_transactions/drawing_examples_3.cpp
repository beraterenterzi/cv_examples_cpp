#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat goruntu(450,450, CV_8UC3,Scalar(255,0,0));

    Rect square (65,100,45,45) ;

    rectangle(goruntu, square, Scalar(255,255,255), 3);

    imshow("Hello", goruntu);

    waitKey(0);


}