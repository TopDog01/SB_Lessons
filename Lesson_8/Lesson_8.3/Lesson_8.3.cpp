

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    float force;

    while (true) {
        std::cout << "Сила удара: ";
        std::cin >> force;
        force *= 10;
        std::cout << "Балл: " <<  (int) force << "\n";
    }
}

