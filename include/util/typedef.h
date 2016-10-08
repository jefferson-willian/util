#ifndef UTIL_INCLUDE_TYPEDEF_H_
#define UTIL_INCLUDE_TYPEDEF_H_

#include <vector>

template<typename T> using vector1d = std::vector<T>;
template<typename T> using vector2d = std::vector<vector1d<T>>;
template<typename T> using vector3d = std::vector<vector2d<T>>;
template<typename T> using vector4d = std::vector<vector3d<T>>;
template<typename T> using vector5d = std::vector<vector4d<T>>;
template<typename T> using vector6d = std::vector<vector5d<T>>;
template<typename T> using vector7d = std::vector<vector6d<T>>;
template<typename T> using vector8d = std::vector<vector7d<T>>;
template<typename T> using vector9d = std::vector<vector8d<T>>;

#endif  // UTIL_INCLUDE_TYPEDEF_H_
