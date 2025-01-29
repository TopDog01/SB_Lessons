#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int a;
	int b;
	int c;
	std::cout << "Введите три числа : \n";
	std::cin >> a >> b >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	std::cout << "Максимальное число равно " << max;

	/*if (a >= b && a >= c) {
		std::cout << "Максимальное число равно " << a;
	}
	else if (b >= a && b >= c) {
		std::cout << "Максимальное число равно " << b;
	}
	else if (c >= a && c >= b) {
		std::cout << "Максимальное число равно " << c;
	}*/

	/*if (a > b) {
		if (a > c) {
			std::cout << "Максимальное число равно " << a;
		}
		else {
			std::cout << "Максимальное число равно " << c;
		}
	}
	else {
		if (b > c) {
			std::cout << "Максимальное число равно " << b;
		}
		else {
			std::cout << "Максимальное число равно " << c;
		}
	}*/
}

