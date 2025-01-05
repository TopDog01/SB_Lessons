#include<iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	std::string name;
	std::string race;

	//Ввод имени персонажа
	std::cout << "Enter character name: ";
	std::cin >> name;

	//Ввод расы персонажа
	std::cout << "Enter the character's race: ";
	std::cin >> race;

	//Вывод приветствия
	std::cout << "A new one was born " << race << ", his name is " << name << ". Welcome to this harsh world!" << std::endl;

	return 0;
}