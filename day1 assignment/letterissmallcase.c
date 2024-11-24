#include <iostream>
#include <cctype> // For islower

bool isLowerCase(char ch) {
    return std::islower(static_cast<unsigned char>(ch)); // Use islower safely
}

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (isLowerCase(ch)) {
        std::cout << ch << " is a lowercase letter." << std::endl;
    } else {
        std::cout << ch << " is not a lowercase letter." << std::endl;
    }

    return 0;
}
