#include <iostream>

int main() {
    std::string s;
    int counter = 0;
    char test = 'a';
    std::cout << "Type out a string:" << "\n";
    std::getline(std::cin, s);
    std::cout << "Your line was: " << s << "\n";
    while(counter < s.length()) {
        test = s[counter];
        std::cout << s.substr(counter, 1) << " " << int(test) << "\n";
        counter++;
    }
}
