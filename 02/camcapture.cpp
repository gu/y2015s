#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat image;
	VideoCapture cap;

	int camOpen = cap.open(CV_CAP_ANY);

	namedWindow("window", CV_WINDOW_AUTOSIZE);

	while (true) {
		cap >> image;

		if (!image.empty()) {
			imshow("window", image);
			cout << "can't show frame";
		}
		if (waitKey(30) >= 0) {
			break;
		}
	}

	return 0;
}
