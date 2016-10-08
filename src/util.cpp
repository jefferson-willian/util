#include "util/util.h"

namespace util {

int cmp(double a, double b, double eps) {
  return (a <= b + eps) ? (a + eps < b) ? -1 : 0 : 1;
}

double fmax(double a, double b, double eps) {
  return cmp(a, b, eps) >= 0 ? a : b;
}

double fmin(double a, double b, double eps) {
  return cmp(a, b, eps) <= 0 ? a : b;
}

}  // namespace util

