#include <iostream>
#include <string>

#include <opencv4/opencv2/core.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgproc.hpp>


int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        std::cout << "Bad arguments!" << std::endl;
        exit(EXIT_FAILURE);
    }
    const std::string FILE_PATH(argv[1]);
    cv::Mat img_gray;
    img_gray = cv::imread(FILE_PATH, cv::ImreadModes::IMREAD_GRAYSCALE);

    if(img_gray.empty())
    {
        std::cout << "input image empty" << std::endl;
        exit(EXIT_FAILURE);
    }

    for(int row = 0; row < 500; ++row)
    {
        for(int col = 0; col < 1000; ++col)
        {
            img_gray.at<uchar>(row, col) = 255;
        }
    }
    cv::imwrite("outgray.bmp", img_gray);
    
    img_gray.release();
}