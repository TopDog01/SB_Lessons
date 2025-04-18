#include <iostream>
#include <string>

int main() {

    setlocale(LC_ALL, "Russian");

    const std::string correctPassword = "mypassword"; // Задайте правильный пароль
    std::string userInput;

    // Цикл for, который будет выполняться до тех пор, пока пользователь не введет правильный пароль
    for (int attempts = 0; attempts < 5; attempts++) { // Максимум 5 попыток
        std::cout << "Введите пароль: ";
        std::cin >> userInput;

        if (userInput == correctPassword) {
            std::cout << "Пароль верный! Доступ разрешен." << std::endl;
            break; // Выход из цикла, если пароль правильный
        }
        else {
            std::cout << "Неверный пароль. Попробуйте снова." << std::endl;
        }

        if (attempts == 4) { // Если это была последняя попытка
            std::cout << "Превышено количество попыток. Доступ запрещен." << std::endl;
        }
    }

    return 0;
}