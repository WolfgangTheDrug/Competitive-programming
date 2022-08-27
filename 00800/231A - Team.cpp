#include <iostream>

int main(){

    int num_lines_read = 0, count_true = 0;
    std::string in, limit;
    std::getline(std::cin, limit);

    for (; num_lines_read <= stoi(limit) && std::getline(std::cin, in); ++num_lines_read) {
        count_true += (in[0] + in[2] + in[4] - 3*'0' > 1);
    }

    std::cout << count_true;
}
