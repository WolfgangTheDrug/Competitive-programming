#include <iostream>
#include <cmath>

int main() {
  std::string x, y;
  std::cin >> x >> y;
  int a = stoi(x);
  int b = stoi(y);

  int result = floor((log(b) - log(a))/ log(1.5))+1;

  std::cout << result  << std::endl;
}
