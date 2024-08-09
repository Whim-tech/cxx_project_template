#include <iostream>

// from header_only library
#include "hello_header_only.hpp"

// from public library's headers
#include "hello_library.hpp"

// UNCOMMENTING SHOULD LEAD TO COMPILE ERROR
// from private library's headers
// #include "private_header.hpp"

int main() {

  std::cout << "Hello, from executable!\n";
  hello_from_header_only();
  hello_library();

  // this functions should be not visible here
  // private_function();

  return 0;
}
