#include <iostream>

int main()
{
    int a = 55;

    std::cout << a << std::endl;
    std::cout << sizeof(a) << " byte" << std::endl;

    // std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cin.get();

    // TIPE DATA

    // bilangan bulat
    unsigned int a = 5; // 32 bit
    int a = 5;          // 32 bit
    long b = 50;        // 64 bit
    short c = 7;        // 16 bit

    // bilangan decimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a';

    // boolean
    bool g = true; // true or false

    return 0;
}