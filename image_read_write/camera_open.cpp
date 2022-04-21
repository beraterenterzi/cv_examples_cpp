#include<opencv2/opencv.hpp>
#include<iostream>
#include<opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main()
{

    VideoCapture webcam(0);

    if (!webcam.isOpened())

    {
        cout << "Webcam yok!";
        return -1;

    }

    while (true)

    {

        Mat read;
        bool error = webcam.read(read);

        if(!hata)
        {
            cout <<"Veri okunamadi!";
            break;

        }
        imshow("Video",read);
        if (waitKey(20)==27)

        break;
    }


}
