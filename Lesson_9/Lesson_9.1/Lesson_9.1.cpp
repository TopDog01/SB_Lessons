#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	float start;
	float finish;
	std::cout << "Введите начальную и конечную амплитуду:\n";
	std::cin >> start >> finish;

	while (start < 0 || finish < 0 || finish > start) {
		std::cout << "Некорректный ввод! Введите еще раз:\n";
		std::cin >> start >> finish;
	}

	int count = 0;
	while (start > finish) {
		start *= 1 - 0.084f;
		count++;
	}

	std::cout << "Маятник достигнет нужной амплитуды через " << count << " колебаний\n";
}
