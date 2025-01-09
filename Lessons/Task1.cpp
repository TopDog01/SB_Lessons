//#include <iostream>
//using namespace std;
//
//int main() {
//
//    setlocale(LC_ALL, "Russian");
//
//    // Ввод стоимости трех товаров
//    double price1, price2, price3;
//    cout << "Введите стоимость первого товара: ";
//    cin >> price1;
//    cout << "Введите стоимость второго товара: ";
//    cin >> price2;
//    cout << "Введите стоимость третьего товара: ";
//    cin >> price3;
//
//    // Вычисление суммы чека
//    double total = price1 + price2 + price3;
//    cout << "Сумма вашего чека: " << total << " руб." << endl;
//
//    // Применение скидки, если сумма превышает 10 000 руб
//    if (total > 10000) {
//        double discount = total * 0.10; // 10% скидка
//        total -= discount; // Уменьшаем сумму чека на размер скидки
//        cout << "Применена скидка 10%. Новая сумма чека: " << total << " руб." << endl;
//    }
//    else {
//        cout << "Скидка не применяется." << endl;
//    }
//
//    return 0;
//}