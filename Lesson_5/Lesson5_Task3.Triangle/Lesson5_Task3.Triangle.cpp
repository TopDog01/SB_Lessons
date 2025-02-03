#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    double A, B, C;

    // Ввод длин палочек
    std::cout << "Введите длину первой палочки (A): ";
    std::cin >> A;
    std::cout << "Введите длину второй палочки (B): ";
    std::cin >> B;
    std::cout << "Введите длину третьей палочки (C): ";
    std::cin >> C;

    // Проверка условия существования треугольника
    if (A + B > C && A + C > B && B + C > A) {
        std::cout << "Из этих палочек можно сложить треугольник." << std::endl;
    }
    else {
        std::cout << "Из этих палочек нельзя сложить треугольник." << std::endl;
    }

    return 0;
}