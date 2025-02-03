#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    const int MAX_WEIGHT = 1200; // Максимально допустимая масса
    int weight1, weight2, weight3, weight4; // Массa машин

    // Ввод масс машин
    std::cout << "Введите массу 1-й машины (в килограммах): ";
    std::cin >> weight1;
    std::cout << "Введите массу 2-й машины (в килограммах): ";
    std::cin >> weight2;
    std::cout << "Введите массу 3-й машины (в килограммах): ";
    std::cin >> weight3;
    std::cout << "Введите массу 4-й машины (в килограммах): ";
    std::cin >> weight4;

    // Проверка на превышение массы
    if (weight1 > MAX_WEIGHT || weight2 > MAX_WEIGHT || weight3 > MAX_WEIGHT || weight4 > MAX_WEIGHT) {
        std::cout << "Есть машина с массой, превышающей 1200 килограммов." << std::endl;
    }
    else {
        std::cout << "Все машины соответствуют допустимому весу." << std::endl;
    }

    return 0;
}