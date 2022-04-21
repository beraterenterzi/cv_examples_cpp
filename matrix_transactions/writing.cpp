#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{


    Mat goruntu(640,480, CV_8UC1,Scalar(450));
    putText(goruntu,"Berat Eren",Point(155,60), FONT_HERSHET_SCRIPT_SIMPLEX, 2, Scalar(255,255,255),3);
    imshow("Hello", goruntu);
    waitKey(0);


}