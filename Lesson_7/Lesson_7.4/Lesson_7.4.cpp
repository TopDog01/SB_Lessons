
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    while (true) {
        std::cout << "Следующий клиент, Добро пожаловать :)\n";
        std::string pinCode;

        for (int tries = 0; tries < 3; tries++) {
            std::cout << "Введите пин-код: ";
            std::cin >> pinCode;

            if (pinCode == "4224") {
                std::cout << "Спасибо, вот ваша зарплата...\n";
                break;
            }
            else {
                std::cout << "Неверный пин-код :(\n";
            }
        }

        std::cout << "Всего доброго!\n";
    }

    
}
