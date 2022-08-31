#include <iostream>

int main() {
  std::string s;
  int a, b, c = 0;

  while (std::cin >> s && !stoi(s)) {
    c++;
  }
  a = c/5;
  b = c - a*5;

  std::cout << abs(a-2) + abs(b-2) << std::endl;
  return 0;
}
