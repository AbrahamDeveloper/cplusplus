#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cout << "Enter a series of numbers (enter a negative number to stop):" << std::endl;

    while (true) {
        std::cin >> number;

        if (number < 0) {
            break;
        }

        sum += number;
    }

    std::cout << "The sum of the entered numbers is: " << sum << std::endl;

    return 0;
}
