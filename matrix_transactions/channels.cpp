#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

    //Scalar BGR deger aliyor
    Mat goruntu(450,450, CV_8UC3,Scalar(150,250,0));

    namedWindow("Hello", WINDOW_AUTOSIZE);

    imshow("Hello", goruntu);

    waitKey(0);

    cout<<"goruntu dizisinin degerleri:" << goruntu << endl

}