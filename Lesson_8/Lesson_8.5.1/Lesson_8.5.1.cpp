

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    float a = 80000.f;
    int i = 0;
    while (true) {
        a += 0.001f;
        i++;
        std::cout << "Итерация " << i << ": " << a << "\n";
    }
}


