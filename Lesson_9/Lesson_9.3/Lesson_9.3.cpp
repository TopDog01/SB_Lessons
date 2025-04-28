#include<iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите координаты:\n";
    char x, y;
    std::cin >> x >> y;

    if (((x >= 'A' && x <= 'H') || (x >= 'a' && x <= 'h')) && y >= '1' && y <= '8') {
        std::cout << "Yes\n";
    }
    else {
        std::cout << "No!\n";
    }

}
