

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");


    float number, precision;
    std::cout << "Из какого числа извлекать квадратный корень? ";
    std::cin >> number;
    std::cout << "Укажите желаемую точность вычислений: ";
    std::cin >> precision;

    float from = 0.0f;
    float to = number, resultPrecision;
    float result;

    do
    {
        result = from + (to - from) / 2.0f;
        float sqrResult = result * result;
        if (sqrResult < number)
        {
            from = result;
        }
        else
        {
            to = result;
        }
        resultPrecision = std::fabs(sqrResult - number);
        std::cout << resultPrecision << "\n";
    } while (resultPrecision > precision);

    std::cout << "Квадратный корень из " << number << " равен " << result << "\n";
}

