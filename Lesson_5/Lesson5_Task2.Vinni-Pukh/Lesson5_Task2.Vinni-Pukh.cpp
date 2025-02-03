#include <iostream>
#include <algorithm>

int main() {

	setlocale(LC_ALL, "Russian");

	//Размеры кирпича
	double A, B, C;
	//Размеры отверстия
	double X, Y;

	//Ввод размеров кирпича
	std::cout << "Введите размеры кирпича (A, B, C): ";
	std::cin >> A >> B >> C;

	//Ввод размеров отверстия
	std::cout << "Введите размеры отверстия (X, Y): ";
	std::cin >> X >> Y;

	//Сортируем размеры кирпича для упрощения проверки
	double brick[3] = { A, B, C };
	double hole[2] = { X, Y };

	std::sort(brick, brick + 3);
	std::sort(hole, hole + 2);

	//Проверка, может ли кирпич пройти через отверстие
	if (brick[0] <= hole[0] && brick[1] <= hole[1]) {
		std::cout << "Кирпич пройдет через отверстие." << std::endl;
	}
	else {
		std::cout << "Кирпич не пройдет через отверстие." << std::endl;
	}

	return 0;
}