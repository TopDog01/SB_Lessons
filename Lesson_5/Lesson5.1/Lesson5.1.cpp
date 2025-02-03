#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	int day;
	int month;
	int year;
	std::cout << "Введите день, месяц и год:\n";
	std::cin >> day >> month >> year;

	if (month < 1 || month > 12) {
		std::cout << "Error";
	}
	else {
		int daysInMonth;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			daysInMonth = 31;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			daysInMonth = 30;
		}
		else if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
			daysInMonth = 29;
		}
		else {
			daysInMonth = 28;
		}
		if (1 <= day && day <= daysInMonth) {
			std::cout << "OK";
		}
		else {
			std::cout << "Error";
		}
	}
}