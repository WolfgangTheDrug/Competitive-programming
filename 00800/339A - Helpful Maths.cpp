#include <iostream>

void swap (std::string &s, int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void bubbleSort(std::string &s) {
    int l = s.size();
    for (int i = l-1; i > 0; i -= 2) {
        for (int j = 0; j < i; j += 2) {
            if (s[j] > s[j+2]) {
                swap(s, j, j+2);
            }
        }
    }
}

int main() {
    std::string in;
    std::cin >> in;

    bubbleSort(in);

    std::cout << in << std::endl;
}
