//#include <iostream>
//
//int main() {
//
//	setlocale(LC_ALL, "Russian");
//
//	int profit;
//	std::cout << "������� ������ �������: ";
//	std::cin >> profit;
//	if (profit >= 50000) {
//		int tax = profit * 30 / 100;
//		std::cout << "������ ������ (30%) �����: " << tax << "\n";
//	}
//	else if (profit >= 10000){
//		int tax = profit * 20 / 100;
//		std::cout << "������ ������ (20%) �����: " << tax << "\n";
//	}
//	else if (profit > 0){
//		int tax = profit * 13 / 100;
//		std::cout << "������ ������ (13%) �����: " << tax << "\n";
//	}
//	else if (profit == 0){
//		std::cout << "������? ������ �� ����������? � ���� ������?\n";
//	}
//	else{
//		std::cout << "��������� �� ������������� �����\n";
//	}
//}