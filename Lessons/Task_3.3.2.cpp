#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    std::string login;
    std::string password;

    // ������ ������
    std::cout << "������� �����: ";
    std::getline(std::cin, login);

    // ������ ������
    std::cout << "������� ������: ";
    std::getline(std::cin, password);

    // ����� ��������� �� �������� �����������
    std::cout << "-----" << std::endl;
    std::cout << login << ", �� ������� �����!" << std::endl;

    return 0;
}