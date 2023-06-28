#include <iostream>

int findMax(int num1, int num2, int num3) {
    int maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }

    if (num3 > maxNum) {
        maxNum = num3;
    }

    return maxNum;
}

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int maxNumber = findMax(num1, num2, num3);

    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}
