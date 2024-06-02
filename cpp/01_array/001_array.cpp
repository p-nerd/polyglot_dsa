#include <iostream>

int main()
{
    // createing array
    int numbers[5];

    // initialing elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // accessing elements
    std::cout << "Elements at index 0: " << numbers[0] << "\n";
    std::cout << "Elements at index 1: " << numbers[1] << "\n";

    // modifining elements
    numbers[1] = 25;
    std::cout << "Modified elements at index 1: " << numbers[1] << "\n";

    return 0;
}
