#ifndef UTIL_INCLUDE_OUTPUT_H_
#define UTIL_INCLUDE_OUTPUT_H_

#include <fstream>
#include <ostream>
#include <string>

namespace util {

class Output {
 protected:
  std::ostream* output_;
  std::ofstream output_filename_;

 public:
  Output();
  ~Output() = default;

  std::ostream& operator() () const {
    return *output_;
  }

  void Open(const char* str);
  void Open(const std::string& str);
  void Open(std::ostream& out);

  static std::ostream null;
};

}  // namespace util

#endif  // UTIL_INCLUDE_OUTPUT_H_
