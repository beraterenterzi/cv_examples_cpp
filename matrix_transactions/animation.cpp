#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

    Mat goruntu(450,450, CV_8UC3,Scalar(250,250,250));

    Mat animasyon;
    for(int i=0;i<250; i+=10)
    {
        PutText(goruntu,"Hello", Point(155,155),FONT_HERSHEY_TRIPLEX , 2, Scalar(255,0,0), 2);
        waitKey(500);
        imshow("Hello", goruntu);
    }

    

    waitKey(0);

    cout<<"goruntu dizisinin degerleri:" << goruntu << endl

}