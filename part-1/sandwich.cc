// Daerrick Rocha
// daerocha@csu.fullerton.edu
// @DaerrickR325
// Partners: @justin-d522

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";
  return 0;
}