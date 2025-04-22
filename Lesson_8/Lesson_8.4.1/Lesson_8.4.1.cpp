#include <iostream>
#include <cmath>


int main() {

	setlocale(LC_ALL, "Russian");

	float distance, angle;
	std::cout << "Введите расстояние до танка: ";
	std::cin >> distance;
	std::cout << "Введите угол: ";
	std::cin >> angle;
	angle /= 57.296;

	float x, y;
	x = std::cos(angle) * distance;
	y = std::sin(angle) * distance;

	std::cout << "Координаты вражеского танка: ";
	std::cout << x << ", " << y << "\n";
}