//#include <iostream>
//using namespace std;
//
//int main() {
//
//    setlocale(LC_ALL, "Russian");
//
//    // ���� ��������� ���� �������
//    double price1, price2, price3;
//    cout << "������� ��������� ������� ������: ";
//    cin >> price1;
//    cout << "������� ��������� ������� ������: ";
//    cin >> price2;
//    cout << "������� ��������� �������� ������: ";
//    cin >> price3;
//
//    // ���������� ����� ����
//    double total = price1 + price2 + price3;
//    cout << "����� ������ ����: " << total << " ���." << endl;
//
//    // ���������� ������, ���� ����� ��������� 10 000 ���
//    if (total > 10000) {
//        double discount = total * 0.10; // 10% ������
//        total -= discount; // ��������� ����� ���� �� ������ ������
//        cout << "��������� ������ 10%. ����� ����� ����: " << total << " ���." << endl;
//    }
//    else {
//        cout << "������ �� �����������." << endl;
//    }
//
//    return 0;
//}