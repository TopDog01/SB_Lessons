#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    std::string login;
    std::string password;

    // Запрос логина
    std::cout << "Введите логин: ";
    std::getline(std::cin, login);

    // Запрос пароля
    std::cout << "Введите пароль: ";
    std::getline(std::cin, password);

    // Вывод сообщения об успешной регистрации
    std::cout << "-----" << std::endl;
    std::cout << login << ", вы успешно зашли!" << std::endl;

    return 0;
}