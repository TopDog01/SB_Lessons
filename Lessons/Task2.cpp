//#include <iostream>
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//
//    const double DISTANCE = 200.0; // ���������� ����� ������� � ������� � ����������
//    const double TIME_LIMIT = 2.0;  // ����� ������� � �����
//
//    double average_speed;
//
//    // ����������� � ������������ ������� ��������
//    std::cout << "������� ������� �������� �������� (��/�): ";
//    std::cin >> average_speed;
//
//    // ��������� ����������, ������� ���������� ������ �������� �� 2 ����
//    double distance_travelled = average_speed * TIME_LIMIT;
//
//    // ������� ����������� ����������
//    std::cout << "�� ������� ��������: " << distance_travelled << " ��." << std::endl;
//
//    // ���������, ������ �� ���������� ��������� �� ������
//    if (distance_travelled >= DISTANCE) {
//        std::cout << "�� ��������!" << std::endl;
//    }
//    else {
//        std::cout << "�� �� ������ ������� �� ������." << std::endl;
//    }
//
//    return 0;
//}