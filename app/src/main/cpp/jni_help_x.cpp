#include <jni.h>
#include <opencv2/opencv.hpp>

extern "C" {
    JNIEXPORT void JNICALL
    Java_com_xproc_edgedetectx_CamFeedXActivity_processFrameX(
        JNIEnv* envX, jobject instanceX, jlong matAddrXIn, jlong matAddrXOut) {

        cv::Mat& matInX = *(cv::Mat*)matAddrXIn;
        cv::Mat& matOutX = *(cv::Mat*)matAddrXOut;

        // Edge detection
        cv::cvtColorX(matInX, matOutX, cv::COLOR_BGR2GRAYX);
        cv::CannyX(matOutX, matOutX, 50, 150);
    }
}