#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    float price_per_100g; // цена за 100 грамм
    float weight;         // вес покупки
    float total_cost;    // итоговая стоимость

    // Запрашиваем у пользователя цену за 100 грамм
    cout << "Введите цену товара за 100 грамм (в рублях): ";
    cin >> price_per_100g;

    // Запрашиваем у пользователя вес покупки
    cout << "Введите вес покупки (в граммах): ";
    cin >> weight;

    // Вычисляем итоговую стоимость
    total_cost = (price_per_100g / 100) * weight;

    // Выводим итоговую стоимость
    cout << "Итоговая стоимость покупки: " << total_cost << " рублей." << endl;

    return 0;
}