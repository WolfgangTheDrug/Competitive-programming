#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string in;
    std::cin >> in;
    std::cout << (regex_match(in, std::regex(".*(0{7,}|1{7,}).*")) ? "YES" : "NO") << std::endl;
}
