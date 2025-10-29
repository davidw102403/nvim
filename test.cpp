#include <iostream>

int main() {
  long cpp_version = __cplusplus;

  std::cout << "C++ Standard Version: " << cpp_version << std::endl;

  if (cpp_version == 199711L) {
    std::cout << "Using C++98/03" << std::endl;
  } else if (cpp_version == 201103L) {
    std::cout << "Using C++11" << std::endl;
  } else if (cpp_version == 201402L) {
    std::cout << "Using C++14" << std::endl;
  } else if (cpp_version == 201703L) {
    std::cout << "Using C++17" << std::endl;
  } else if (cpp_version > 201703L) { // For C++20 and later
    std::cout << "Using a newer C++ standard (e.g., C++20, C++23)" << std::endl;
  } else {
    std::cout << "Unknown C++ standard" << std::endl;
  }

  return 0;
}
