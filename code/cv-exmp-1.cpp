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
    cv::Mat img_color;
    img_color = cv::imread(FILE_PATH, cv::ImreadModes::IMREAD_ANYCOLOR);
    cv::Mat imgcpy = img_color.clone();

    if(img_color.empty())
    {
        std::cout << "input image empty" << std::endl;
        exit(EXIT_FAILURE);
    }

    for(int row = 0; row < img_color.rows; ++row)
    {
        for(int col = 0; col < img_color.cols; ++col)
        {
            img_color.at<cv::Vec3b>(row, col)[2] = 0;
        }
    }
    
    cv::imwrite("outcolor.bmp", img_color);
    img_color.release();
    
    cv::imwrite("outcolorcpy.bmp", imgcpy);
    imgcpy.release();
}