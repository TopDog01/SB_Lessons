
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Пожирает всё кругом:\n";
    std::cout << "Зверя, птицу, лес и дом.\n";
    std::cout << "Сталь сгрызёт, железо сгложет.\n";
    std::cout << "Крепкий камень уничтожит.\n";
    std::cout << "Власть его всего сильней,\n";
    std::cout << "Даже власти королей.\n\n";

    std::string answer;

    for (int counter = 0; counter < 3; counter++) {
        std::cout << "Твой ответ, Бильбо: ";
        std::cin >> answer;

        if (answer == "Время") {
            std::cout << "Голлум хотел вас съесть, но на этот раз вы ответили правильно!\n";
            break;
        }

        std::cout << "Неверный ответ. Голлум предвкушает обед из хоббита...\n";
    }

    //std::cout << "Неправильных ответов: " << counter;
}