#include <iostream>

bool isNumericConstant(const std::string& input) {
    for (char c : input) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {


    std::string userInput;
    std::cout << "Enter input: ";
    std::cin >> userInput;

    std::cout << (isNumericConstant(userInput) ? "Numeric constant" : "Not numeric") << std::endl;

    return 0;
}

