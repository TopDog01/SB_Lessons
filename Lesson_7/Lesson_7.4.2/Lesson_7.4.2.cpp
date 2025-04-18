
#include <iostream>

int main()
{
    for (int row = 0; row <= 20; row++) {
        for (int col = 0; col <= 50; col++) {
            if (row == 10)
                std::cout << "-";
            else if (col == 25)
                std::cout << "|";
            else if (col == -row + 20)
                std::cout << "/";
            else if (col == row + 30)
                std::cout << "\\";
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}

