#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

    Mat matrix(450,450, CV_8UC3,Scalar(150,250,0));

    imshow("X", matrix);
    resize(x,x,Size(300,150));
    imshow("X new", matrix);
    waitkey(0);
}