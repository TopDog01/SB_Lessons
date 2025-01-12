//#include <iostream>
//
//int main() {
//
//	setlocale(LC_ALL, "Russian");
//
//	int profit;
//	std::cout << "Введите размер прибыли: ";
//	std::cin >> profit;
//	if (profit >= 50000) {
//		int tax = profit * 30 / 100;
//		std::cout << "Размер налога (30%) равен: " << tax << "\n";
//	}
//	else if (profit >= 10000){
//		int tax = profit * 20 / 100;
//		std::cout << "Размер налога (20%) равен: " << tax << "\n";
//	}
//	else if (profit > 0){
//		int tax = profit * 13 / 100;
//		std::cout << "Размер налога (13%) равен: " << tax << "\n";
//	}
//	else if (profit == 0){
//		std::cout << "Правда? Ничего не заработали? А если найдем?\n";
//	}
//	else{
//		std::cout << "Ожидалось не отрицательное число\n";
//	}
//}