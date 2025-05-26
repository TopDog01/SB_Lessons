

#include <iostream>

int main()
{
    std::string text;
    std::string word;
    std::cout << "Input the text and the word:\n";
    std::cin >> text >> word;


    bool found = false;
    for (int startPos = 0; startPos + word.length() <= text.length(); startPos++)
    {
        bool match = true;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] != text[i + startPos])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            found = true;
            break;
        }
    }

    

    if (found)
    {
        std::cout << "Yes!\n";
    }
    else {
        std::cout << "No!\n";
    }
}

