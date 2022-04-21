#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

    VideoCapture("1.mp4");

    if (video.isOpened())

    {
        while(1)

        {
            Mat x;
            video.read(x);
            imshow("Video",x);
            if(waitKey(100)==32)

            break;
        }

    }

}
