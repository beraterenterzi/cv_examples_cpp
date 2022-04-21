#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

	Mat berat = imread("1.jpg")
	Mat x;
	
    resize(berat,berat,Size(500,500));
    
    cvtColor(berat,berat, COLOR_BGR2GRAY);
    imshow("1.jpg",x);
    imshow("1.jpg",berat);
    waitKey(0);
}
