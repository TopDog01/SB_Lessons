
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::cout << "Введите положительное число без нулей в начале:\n";
    std::cin >> number;

    int sum = 0;
   
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "Сумма цифр равна " << sum;
}
