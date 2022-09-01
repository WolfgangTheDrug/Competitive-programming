#include <iostream>

char to_lower(char c) {
    return (c<'a' ? c+'a'-'A' : c);
}

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int L = s1.size();

  int sgn = 0;
  char a, b;

  for (int i = 0; i < L; ++i) {
      a = to_lower(s1[i]), b = to_lower(s2[i]);

      if(a != b){
          sgn = (a - b)/abs(a - b);
          break;
      }
  }

  std::cout << sgn << std::endl;
  return 0;
}
