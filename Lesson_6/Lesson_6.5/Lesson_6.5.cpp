
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::cout << "Введите положительное число:\n";
    std::cin >> number;

    int current = 1;
    while (current < number) {
        if (number % current == 0) break;
        current += 1;
    }


    if (current == number) {
        std::cout << "Это простое число";
    }
    else {
        std::cout << "Это не простое число";
    }
}

