

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int totalMonths;
    std::cout << "Анатолий, как долго собираетесь копить? ";
    std::cin >> totalMonths;

    int savedMoney = 0;
    int sum = 0;

    for (int month = 0; month < totalMonths; month++)
    {
        std::cout << "Месяц" << month << " ";
        std::cout << "Сколько ты хочешь отложить рублей? ";
        std::cin >> savedMoney;
        sum += savedMoney;
    }

    std::cout << "Поздравляем, за " << totalMonths << " ты накопишь " << sum << " рублей!\n";
}

