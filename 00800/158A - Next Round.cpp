#include <iostream>
#include <string>
#include <sstream>


int main() {
    std::string n_str, k_str, dashboard;
    std::getline(std::cin, n_str, ' ');
    std::getline(std::cin, k_str, '\n');
    std::getline(std::cin, dashboard, '\n');

    std::stringstream ss(dashboard);
    int n = stoi(n_str), k = stoi(k_str);
    int a[n];

    std::string buffor;
    int i = 0;

    while(ss >> buffor) {
        a[i] = stoi(buffor);
        ++i;
    }

    int count = 0;
    for (i = 0; i < n; i++) {
        count += (a[i] >= a[k-1] && a[i] > 0);
    }

    std::cout << count << std::endl;

    return 0;
}
