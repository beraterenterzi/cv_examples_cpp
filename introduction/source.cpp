#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

	Mat goruntu(450,450 , CV_8UC1, Scalar(0));
	namedWindow("Merhaba",WINDOW_AUTOSIZE);
	imshow("Merhaba", goruntu);
	waitKey(0);
	

}
