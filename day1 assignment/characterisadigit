#include <iostream>
#include <cctype> // For isdigit

bool isDigit(char ch) {
    return std::isdigit(static_cast<unsigned char>(ch)); // Use isdigit safely
}

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (isDigit(ch)) {
        std::cout << ch << " is a digit." << std::endl;
    } else {
        std::cout << ch << " is not a digit." << std::endl;
    }

    return 0;
}
