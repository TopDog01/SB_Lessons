#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int chatls; // количество чатлов
    const float CHATLS_TO_KC = 2200.0; // количество чатлов в 1 КЦ
    const float KC_TO_GRAVITZAPA = 0.5; // количество КЦ в 1 гравицапе

    // Запрашиваем у пользователя количество чатлов
    cout << "Введите количество чатлов (целое положительное число): ";
    cin >> chatls;

    // Проверка на корректность ввода
    if (chatls < 0) {
        cout << "Ошибка: количество чатлов должно быть положительным числом." << endl;
        return 1; // Завершаем программу с ошибкой
    }

    // Конвертация чатлов в КЦ
    float kc = chatls / CHATLS_TO_KC;

    // Конвертация КЦ в гравицапы
    float gravitzapas = kc / KC_TO_GRAVITZAPA;

    // Выводим результаты
    cout << "Количество КЦ: " << kc << endl;
    cout << "Количество гравицап, которые можно купить: " << gravitzapas << endl;

    return 0;
}