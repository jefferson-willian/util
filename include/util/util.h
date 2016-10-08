#ifndef UTIL_INCLUDE_UTIL_H_
#define UTIL_INCLUDE_UTIL_H_

namespace util {

const double EPS = 1e-10;

// Compare two doubles.
// -1 : a less than b
//  0 : a equal b
//  1 : a greater than b
int cmp(double a, double b, double eps = EPS);

// Float min and max using double EPS precision comparasion.
double fmax(double a, double b, double eps = EPS);
double fmin(double a, double b, double eps = EPS);

}  // namespace util

#endif  // UTIL_INCLUDE_UTIL_H_
