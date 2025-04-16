

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Какого размера ваше письмо? ";
    int startSize;
    std::cin >> startSize;

    int timesFolded = 0;


    for (int size = startSize; size > 12; size /= 2) {
        timesFolded += 2;
    }

    std::cout << "Вам нужно сложить письмо " << timesFolded << " раз.";
}
