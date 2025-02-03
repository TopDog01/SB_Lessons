#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int height, weight, hands, legs;
    double flightHours;

    // Ввод данных о призывнике
    std::cout << "Введите рост (в см): ";
    std::cin >> height;
    std::cout << "Введите вес (в кг): ";
    std::cin >> weight;
    std::cout << "Введите количество рук: ";
    std::cin >> hands;
    std::cout << "Введите количество ног: ";
    std::cin >> legs;
    std::cout << "Введите налетанные часы на самолетах: ";
    std::cin >> flightHours;

    // Проверка критериев
    bool isHeightValid = (height >= 145 && height <= 165);
    bool isWeightValid = (weight >= 45 && weight <= 65);
    bool isLimbsValid = (hands == legs);
    bool isFlightHoursValid = (flightHours > 100);

    // Проверка, подходит ли призывник
    if (isHeightValid && isWeightValid && isLimbsValid && isFlightHoursValid) {
        std::cout << "Призывник подходит." << std::endl;
    }
    else {
        std::cout << "Призывник не подходит." << std::endl;
    }

    return 0;
}