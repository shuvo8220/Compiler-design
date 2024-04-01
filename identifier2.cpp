
#include <iostream>
#include <string>

bool isValidIdentifier(const std::string& str) {
    if (str.empty())
        return false;


    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
        return false;


    for (std::string::size_type i = 1; i < str.length(); ++i) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
            return false;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter an identifier: ";
    std::cin >> input;

    if (isValidIdentifier(input)) {
        std::cout << input << " is a valid identifier." << std::endl;
    } else {
        std::cout << input << " is not a valid identifier." << std::endl;
    }

    return 0;
}
