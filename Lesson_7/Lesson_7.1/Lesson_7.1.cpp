#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "Какое по счёту число Фибоначчи вы хотите увидеть? ";

    std::cin >> n;
    int counter = 0;

    int previousNumber = 1;
    int prevPreviousNumber = 1;
    int currentNumber;

    if (n <= 0 || n > 46) {
        std::cout << "Извините, порядковый номер числа должен быть больше нуля и меньше 47\n";
    }
    else {
        while (counter < n) {
            if (counter < 2) {
                currentNumber = 1;
            }
            else {
                currentNumber = previousNumber + prevPreviousNumber;
            }

            std::cout << currentNumber << " ";
            counter++;
            prevPreviousNumber = previousNumber;
            previousNumber = currentNumber;
        }

        std::cout << "\nЭто число " << currentNumber << "\n";
    }
}
