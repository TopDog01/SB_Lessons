

#include <iostream>

int main()
{

    setlocale(LC_ALL, "Russian");

    float distance = 3, time;

    std::cout << "За сколько секунд автомобиль проехал отрзок " << distance << " км? ";
    std::cin >> time;

    float meanSpeed = distance / time;
    meanSpeed *= 3600.0f;

    std::cout << "Средняя скорость автомобиля: " << meanSpeed << "\n";

    if (meanSpeed > 80.0f)
    {
        std::cout << "Выписан штраф!";
    }

}
