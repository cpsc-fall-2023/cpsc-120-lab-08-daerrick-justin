// Justin Doan
// justindoan522@csu.fullerton.edu
// @justin-d522
// Partners: @DaerrickR325

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum{0.0};
  bool first = true;
  for (auto& numbers : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(numbers);
  }
  double average = sum / (static_cast<double>(arguments.size()) - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
