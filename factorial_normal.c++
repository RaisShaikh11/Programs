#include <iostream>

int factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0;i--)
        fact = fact * i;
    return fact;
}
int main() {
    int number;
    std::cout << "Enter number to calculate factorial" << std::endl;
    std::cin >> number;
    std::cout << "Factorial of a number is :" << factorial(number);
    return 0;
}
