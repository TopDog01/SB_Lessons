
#include <iostream>

int main(){
    setlocale(LC_ALL, "Russian");

    int count = 0;
    while (count < 100) {
        std::cout << "Через забор прыгнула овца.\n";
        count += 1;
    }
    
}

