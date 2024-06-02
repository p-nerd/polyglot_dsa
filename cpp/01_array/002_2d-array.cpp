#include <iostream>

int main()
{
    // createing array
    int numbers[3][3];

    // initialing elements
    numbers[0][0] = 10;
    numbers[0][1] = 20;
    numbers[0][2] = 30;
    numbers[1][0] = 40;
    numbers[1][1] = 50;
    numbers[1][2] = 60;
    numbers[2][0] = 70;
    numbers[2][1] = 80;
    numbers[2][2] = 90;

    // accessing elements
    std::cout << "Elements at index 0, 0: " << numbers[0][0] << "\n";
    std::cout << "Elements at index 1, 0: " << numbers[1][0] << "\n";

    // modifining elements
    numbers[1][2] = 25;
    std::cout << "Modified elements at index 1, 2: " << numbers[1][2] << "\n";

    return 0;
}
