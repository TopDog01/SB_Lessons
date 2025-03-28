#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	std::string password;
	std::cout << "Введите пароль:\n";
	std::cin >> password;

	while (password != "blablabla") {
		std::cout << "Введите пароль\n";
		std::cin >> password;
	}
	std::cout << "Правильный пароль\n";
}