
#include <iostream>

int main()
{
    std::string first;
    std::string second;
    std::cout << "Input two strings:\n";
    std::cin >> first >> second;

    if (first < second)
    {
        std::cout << "Yes!\n";
    }
    else {
        std::cout << "No!\n";
    }
}

