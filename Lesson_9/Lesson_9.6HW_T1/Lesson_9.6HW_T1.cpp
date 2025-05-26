#include <iostream>
#include <string>

int main() {
    // Объявляем переменные для текста и искомого слова
    std::string text, word;

    // Запрашиваем у пользователя ввод текста
    std::cout << "Enter text: ";
    std::getline(std::cin, text); // Считываем текст целиком с пробелами

    // Запрашиваем у пользователя ввод слова
    std::cout << "Enter the word to search for: ";
    std::getline(std::cin, word); //  Считываем слово целиком 

    // Подсчет количества вхождений слова в тексте
    int count = 0;
    int text_length = text.length();
    int word_length = word.length();

    // Используем цикл for для обхода текста
    for (int i = 0; i <= text_length - word_length; i++) {
        // Проверяем, совпадает ли подстрока с искомым словом
        if (text.substr(i, word_length) == word) {
            count++; // величиваем счетчик при нахождении вхождения
        }
    }

    // Выводим результат
    std::cout << "Result: " << count << "." << std::endl;

    return 0;
}