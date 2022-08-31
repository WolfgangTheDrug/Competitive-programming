#include <iostream>

int main() {
  std::string s;
  std::cin >> s; // clearing the redundant info
  int count = 0;

  while (std::cin >> s) {
    if(s[0] == '+' || s[2] == '+') {
        ++count;
    } else if (s[0] == '-' || s[2] == '-') {
        --count;
    }
  }

  std::cout << count << std::endl;
  return 0;
}
