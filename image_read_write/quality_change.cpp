#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

	Mat berat = imread("1.jpg")
	
	
    resize(berat,berat,Size(500,500))

    vector<int> kalite;
    kalite.push_back(IMWRITE_JPEG_QUALITY);
    kalite.push_back(50);
	imshow("Merhaba", berat);
    imwrite("1.png",berat,kalite);
    waitKey(0);
	

}
