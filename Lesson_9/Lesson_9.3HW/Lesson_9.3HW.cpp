#include <iostream>

int main() {
    char first, second;
    std::cout << "Input two cards:\n";
    std::cin >> first >> second;

    // Изначально считаем, что карты равны
    if (first == second) {
        std::cout << "Equal\n";
        return 0;
    }

    // Функция для получения значения карты
    auto getCardValue = [](char card) -> int {
        if (card >= '6' && card <= '9') {
            return card - '0'; // 6-9
        }
        else if (card == '0') {
            return 10; // десятка
        }
        else if (card == 'J') {
            return 11;
        }
        else if (card == 'Q') {
            return 12;
        }
        else if (card == 'K') {
            return 13;
        }
        else if (card == 'A') {
            return 14; // туз
        }
        else {
            return 0; // На всякий случай, если введут что-то неправильное
        }
        };

    int firstValue = getCardValue(first);
    int secondValue = getCardValue(second);

    // Правила, что 6 бьет туза
    // В случае, если одна карта - 6, а другая - туз, 6 выигрывает
    if (first == '6' && second == 'A') {
        std::cout << "First\n";
        return 0;
    }
    else if (second == '6' && first == 'A') {
        std::cout << "Second\n";
        return 0;
    }

    // Если обе карты - тузы, или обе - не тузы, сравниваем значения
    // Но помним, что 6 всегда бьет туза, если не равны
    if (first == 'A') {
        std::cout << "Second\n"; // туз проигрывает, если вторая карта не 6
    }
    else if (second == 'A') {
        std::cout << "First\n";
    }
    else {
        // Если ни одна из карт - туз, сравни значения
        if (firstValue > secondValue) {
            std::cout << "First\n";
        }
        else {
            std::cout << "Second\n";
        }
    }

    return 0;
}