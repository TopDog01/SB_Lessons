
#include <iostream>

int main()
{
    std::cout << "Input the time in HH:MM format:\n";
    std::string time;
    std::cin >> time;

    if (time.length() != 5 || time[2] != ':' || time[0] < '0'
        || time[0] > '9' || time[1] < '0' || time[1] > '9'
        || time[3] < '0' || time[3] > '9' || time[4] < '0'
        || time[4] > '9') {
        std::cout << "Error!\n";
    }
    else {
        int hours = 10 * (time[0] - '0') + (time[1] - '0');
        int minutes = 10 * (time[3] - '0') + (time[4] - '0');

        if (hours > 23 || minutes > 59) {
            std::cout << "Error!\n";
        }
        else {
        std::cout << 60 * hours + minutes;
        }
        

    }


}
