#include <iostream>

int main(){

    int num_lines_read = 0;
    std::string input, limit;
    std::getline(std::cin, limit);

    for (; num_lines_read <= stoi(limit) && std::getline(std::cin, input); ++num_lines_read) {
        int l = input.length();
        if(l > 10) {
            input = input[0] + std::to_string(l-2) + input[l-1];
        }
        std::cout << input << std::endl;
    }
}
