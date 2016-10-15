#include "util/output.h"

#include <ostream>
#include <string>

namespace util {

Output::Output() : output_(&null) {};

std::ostream Output::null(0);

void Output::Open(const char* str) {
  if (output_filename_.is_open())
    output_filename_.close();
  output_filename_.open(str);
  output_ = &output_filename_;
}

void Output::Open(const std::string& str) {
  Open(str.c_str());
}

void Output::Open(std::ostream& out) {
  output_ = &out;
}

}  // namespace util
