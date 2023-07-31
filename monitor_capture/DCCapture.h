#pragma once

#include <Windows.h>

#include <stdint.h>

enum VideoFrameFormat {
    RGBA,
    YUV420
};//enum VideoFrameFormat

struct VideoFrame {
    VideoFrame(int width, int heigth, VideoFrameFormat format = VideoFrameFormat::RGBA);
    ~VideoFrame();

    int width;
    int height;
    VideoFrameFormat format;
    uint8_t *data;
};//struct VideoFrame

class DCCapture {
public:
 /**
  * @remark color usually RGBA, so ignore this param
 */
 DCCapture(int x, int y, int nWidth, int nHeight, bool cursor);
 
 //BYTE *CaptureRGBAData(HDC *Window);
 int Capture(VideoFrame &videoFrame, bool flip);
 
};//class DCCapture
