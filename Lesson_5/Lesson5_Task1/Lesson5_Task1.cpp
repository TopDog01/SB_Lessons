#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    double x, y;

    // Ввод координат точки
    std::cout << "Введите координаты точки (X Y): ";
    std::cin >> x >> y;

    // Определение положения точки
    if (x == 0 || y == 0) {
        std::cout << "Точка лежит на границе." << std::endl;
    }
    else if (x > 0 && y > 0) {
        std::cout << "Точка находится в первой четверти." << std::endl;
    }
    else if (x < 0 && y > 0) {
        std::cout << "Точка находится во второй четверти." << std::endl;
    }
    else if (x < 0 && y < 0) {
        std::cout << "Точка находится в третьей четверти." << std::endl;
    }
    else if (x > 0 && y < 0) {
        std::cout << "Точка находится в четвертой четверти." << std::endl;
    }

    return 0;
}