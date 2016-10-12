#ifndef UTIL_INCLUDE_TIME_H_
#define UTIL_INCLUDE_TIME_H_

#include <ctime>
#include <sys/time.h>

namespace util {

class Timer {
 protected:
  timeval start_;
  timeval end_;

  clock_t start_clock_;
  clock_t end_clock_;

  bool started_{false};

 public:
  // Start the clock.
  void Start();

  // Stop the clock.
  void Stop();

  // Returns the elapsed time (in seconds) from Start() call until Stop() call,
  // if Stop() hasn't been called yet then returns the elapsed time from Start()
  // call until the ElapsedTime() call.
  double ElapsedTime() const;

  // Returns the number of CPU clocks from Start() call until Stop() call.
  clock_t Clocks() const;

  // Returns the speedup from Start() call until Stop() call.
  double SpeedUp() const;
};

}  // namespace util

#endif  // UTIL_INCLUDE_TIME_H_
