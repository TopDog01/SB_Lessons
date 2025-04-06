#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    std::cout << "Введите основание степени:\n";
    std::cin >> a;

    int b;
    std::cout << "Введите показатель степени:\n";
    std::cin >> b;

    int iterations = 0;
    int result = 1;
    while (iterations < b) {
        result *= a;
        iterations += 1;
    }

    std::cout << "Результат равен " << result;
}