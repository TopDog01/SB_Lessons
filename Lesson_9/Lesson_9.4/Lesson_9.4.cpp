
#include <iostream>

int main()
{
    std::string str;
    std::cout << "Input string:\n";
    std::cin >> str;

    bool good = true;

    for (int i = 0; i < str.length() && good; i++)
    {
        if (str[i] < 'a' || str[i] > 'z') {
            good = false;
            
        }
            
    }
    for (int i = 0; i + 1 < str.length() && good; i++)
    {
        if (str[i] > str[i + 1]) {
            good = false;
            
        }

    }

    if (good) {
        std::cout << "Yes!\n";
    }
    else {
        std::cout << "No!\n";
    }
}

