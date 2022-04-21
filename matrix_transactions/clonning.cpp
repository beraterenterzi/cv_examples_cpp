#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

    Mat goruntu(450,450, CV_8UC3,Scalar(150,250,0));

    Mat y=goruntu.clone();

    imshow("y", y);

    waitKey(0);


}