#include "util/timer.h"

#include <ctime>
#include <sys/time.h>

namespace util {

namespace {

double GetMilliseconds(const timeval& time) {
  return time.tv_sec * 1000000 + time.tv_usec;
}

}  // namespace

void Timer::Start() {
  started_ = true;
  start_clock_ = clock();
  gettimeofday(&start_, 0);
}

void Timer::Stop() {
  if (!started_) return;
  started_ = false;
  end_clock_ = clock();
  gettimeofday(&end_, 0);
}

double Timer::ElapsedTime() const {
  if (!started_)
    return (GetMilliseconds(end_) - GetMilliseconds(start_)) / 1000000.;
  timeval end;
  gettimeofday(&end, 0);
  return (GetMilliseconds(end) - GetMilliseconds(start_)) / 1000000.;
}

clock_t Timer::Clocks() const {
  return end_clock_ - start_clock_;
}

double Timer::SpeedUp() const {
  return Clocks() / ElapsedTime() / CLOCKS_PER_SEC;
}

};  // namespace util
