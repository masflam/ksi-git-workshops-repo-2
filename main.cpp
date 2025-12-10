#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

std::vector<std::string> fizz_buzz(int n) {
  std::vector<std::string> output;

  for (int i = 1; i <= n; ++i) {
    if (i % 3 == 0 && i % 5 == 0) {
      output.push_back("FizzBuzz");
    } else if (i % 3 == 0) {
      output.push_back("Fizz");
    } else if (i % 5 == 0) {
      output.push_back("Buzz");
    } else {
      output.push_back(std::to_string(i));
    }
  }

  return output;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
    return 1;
  }

  int n = atoi(argv[1]);

  for (auto line : fizz_buzz(n)) {
    std::cout << line << std::endl;
  }

  return 0;
}
