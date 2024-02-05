#include <iostream>

const int MAX_SIZE = 100;

class SimpleStack {
    int data[MAX_SIZE];
    int top;

public:
    SimpleStack() : top(-1) {}

    void push(int value) {
        if (top < MAX_SIZE - 1) {
            data[++top] = value;
        }
    }

    int pop() {
        if (top >= 0) {
            return data[top--];
        }
        return -1; // Stack is empty
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int calculateFactorial(int n) {
    SimpleStack factorialStack;
    factorialStack.push(1);

    for (int i = 2; i <= n; ++i) {
        int currentFactorial = factorialStack.pop() * i;
        factorialStack.push(currentFactorial);
    }

    return factorialStack.pop();
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate factorial using a stack
    std::cout << "Factorial: " << calculateFactorial(number) << std::endl;

    return 0;
}

