#include <iostream>
#include <cmath>

int main() {

    setlocale(LC_ALL, "Russian");

    // Максимальная площадь участка
    const int maxArea = 1000000; // 1 000 000 м²
    int area;

    std::cout << "Введите площадь участка в квадратных метрах (до " << maxArea << " м²): ";
    std::cin >> area;

    if (area < 1 || area > maxArea) {
        std::cout << "Площадь должна быть в диапазоне от 1 до " << maxArea << " м²." << std::endl;
        return 1; // Выход из программы с ошибкой
    }

    // Перебор всех целых чисел от 1 до 1000
    for (int i = 1; i * i <= area; i++) {
        if (i * i == area) {
            std::cout << "Площадь " << area << " м² является квадратом целого числа (" << i << "^2)." << std::endl;
            return 0; // Выход, если нашли квадрат
        }
    }

    // Если ни один квадрат не подходит
    std::cout << "Площадь " << area << " м² не является квадратом целого числа." << std::endl;
    return 0;
}