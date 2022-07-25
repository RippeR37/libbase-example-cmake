#include <iostream>

#include "base/callback.h"

int main() {
  base::BindOnce([]() { std::cout << "Hello World!" << std::endl; }).Run();
  return 0;
}
