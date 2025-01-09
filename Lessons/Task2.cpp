//#include <iostream>
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//
//    const double DISTANCE = 200.0; // расстояние между Москвой и Рязанью в километрах
//    const double TIME_LIMIT = 2.0;  // лимит времени в часах
//
//    double average_speed;
//
//    // Запрашиваем у пользователя среднюю скорость
//    std::cout << "Введите среднюю скорость движения (км/ч): ";
//    std::cin >> average_speed;
//
//    // Вычисляем расстояние, которое автомобиль сможет проехать за 2 часа
//    double distance_travelled = average_speed * TIME_LIMIT;
//
//    // Выводим вычисленное расстояние
//    std::cout << "Вы сможете проехать: " << distance_travelled << " км." << std::endl;
//
//    // Проверяем, сможет ли автомобиль добраться до Рязани
//    if (distance_travelled >= DISTANCE) {
//        std::cout << "Вы приехали!" << std::endl;
//    }
//    else {
//        std::cout << "Вы не успели доехать до Рязани." << std::endl;
//    }
//
//    return 0;
//}