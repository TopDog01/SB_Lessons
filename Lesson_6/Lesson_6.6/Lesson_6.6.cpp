
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::cout << "Введите положительное число\n";
    std::cin >> number;

    int current = 2;
    bool found = false;
    while (current  * current <= number && !found) {
        found = number % current == 0;
    }

    if (!found) {
        std::cout << "Это простое число";
    }
    else {
        std::cout << "Это не просто число";
    }

}

