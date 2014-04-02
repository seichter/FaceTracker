/**
  * Small wrapper to get proper timings in ms for a scope
  */

#ifndef __TIMER_H__
#define __TIMER_H__

class ScopeTimer {
    int64 _t0;
    std::string _tag;
public:
    ScopeTimer(const std::string& tag) : _t0(cv::getTickCount()), _tag(tag) {}
    ~ScopeTimer() { std::cout << _tag << " " << (cv::getTickCount()-_t0) * 1000.0 / cv::getTickFrequency() << std::endl; }
};

//class ScopeTimerAvg {
//    int64 _t0;
//    std::string _tag;
//    unsigned int _frames;

//    std::vector<int64> _deltaT;

//public:
//    ScopeTimer(const std::string& tag) : _t0(cv::getTickCount()), _tag(tag) {}

//    void tictoc() { _deltaT.push_back()


//    ~ScopeTimer() { std::cout << _tag << " " << (cv::getTickCount()-_t0) * 1000.0 / cv::getTickFrequency() << std::endl; }
//};


#endif
