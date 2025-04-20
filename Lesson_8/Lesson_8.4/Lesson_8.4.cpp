
#include <iostream>
#include <cmath>

int main()
{
    
    setlocale(LC_ALL, "Russian");
    
    float x, y;
    std::cout << "Введите координату х: ";
    std::cin >> x;
    std::cout << "Введите координату y: ";
    std::cin >> y;


    float distance = std::sqrt(x * x + y * y);


    std::cout << "Расстояние от вас до точки, равно " << distance << "\n";

}

