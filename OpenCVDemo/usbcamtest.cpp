#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
using namespace cv;
int main()
{
    VideoCapture cap(0);                //打开摄像头
	if(!cap.isOpened())  return -1;     //检测一下摄像头是否打开
        Mat frame;
	while(1)
	{
        cap>>frame;        //读取当前帧
        /* 此处可添加图像处理算法，对图像进行处理，
        我们可以不做任何操作，只打开一下摄像头*/
        imshow("Raspbery OpenCV CAM", frame);    //显示
		cvResizeWindow("Raspbery OpenCV CAM",640,400);
		cvMoveWindow("Raspbery OpenCV CAM",0,0);
        if(waitKey(20) >=0) break;  // 等待esc按键，跳出循环
		else if(!cvGetWindowHandle("Raspbery OpenCV CAM")) break;     
		//也可以点击窗口上的关闭按钮退出循环
    }
    return 0;		
}