#include <iostream>

#include "hello_header_only.hpp"
#include "hello_library.hpp"

int main() {

  std::cout << "Hello, from executable!\n";
  hello_from_header_only();
  hello_library();

  return 0;
}
