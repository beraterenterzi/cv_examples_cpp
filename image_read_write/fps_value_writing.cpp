#include<opencv2/opencv.hpp>
#include<iostream>
#include<opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main()
{

    VideoCapture webcam(0);
    stringstream fpsvalue;
    double fps;
    if (!webcam.isOpened())
    {

        while (true)

        {
            Mat y;

            video.read(y);
            fps = video.get(CAP_PROP_FPS);
            fpsvalue.str("");
            fpsvalue.clear();
            fpsvalue << "FPS:" <<fps;
            putText(y,fpsvalue.str(),Point(15,150),FONT_HERSHEY_COMPLEX, 2,Scalar(0,0,255),2 );
            if (waitKey(20)==27)
            {
                break;
            }
            imshow("Video",x);
            imshow("Video",y); 
        }


    }

}
