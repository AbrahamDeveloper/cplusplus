#include <iostream>

int main() {
    char operation;
    double num1, num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}
