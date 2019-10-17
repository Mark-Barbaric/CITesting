#include "StringReverse.h"

#include <iostream>
#include <string>

using namespace CPPLondonUni;

static std::ostream& operator<<(std::ostream& os, const StringReverse& s) {
    std::string out = s;
    os << out;
    return os;
}

int main() {
    std::cout << "Enter Your Name: ";
    std::string name;
    std::getline(std::cin, name);
    StringReverse nameRev{name};

    if (nameRev.empty())
        std::cout << "You didn't enter a name\n";
    else if (nameRev == name)
        std::cout << "Your name is a palindrome!\n";
    else
        std::cout << "Your name in reverse is: " << nameRev << '\n';
    return 0;
}