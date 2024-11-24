#include <iostream>
#include <cctype> // For isalnum

bool isAlphanumeric(char ch) {
    return std::isalnum(static_cast<unsigned char>(ch)); // Use isalnum safely
}

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (isAlphanumeric(ch)) {
        std::cout << ch << " is alphanumeric." << std::endl;
    } else {
        std::cout << ch << " is not alphanumeric." << std::endl;
    }

    return 0;
}
