#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat goruntu(150,150, CV_8UC1,Scalar(150));
    namedWindow("Hello", WINDOW_AUTOSIZE);
    imshow("Hello", goruntu);
    waitKey(0);

    cout<<"goruntu dizisinin degerleri:" << goruntu << endl

}