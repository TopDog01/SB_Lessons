
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int count;
	std::cout << "Сколько чисел вы хотите просуммировать?\n";
	std::cin >> count;

	std::cout << "Окей, введите " << count << "чисел:\n";

	int iterations = 0;
	int sum = 0;
	while (iterations < count) {
		int number;
		std::cin >> number;
		sum += number;
		iterations += 1;
	}
	std::cout << "Сумма равна " << sum;

}
