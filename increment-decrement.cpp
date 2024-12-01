#include <iostream>

using namespace std;

int main()
{
    // INCREMENT & DECREMENT
    int a = 5;
    int b = 5;

    // preincrement dan postincrement

    // postincrement
    // a = a + 1; // 6
    // a = a++; // 6
    a++;
    cout << "postincrement: " << a++ << endl; // 6
    cout << a << endl;                        // 7

    // preincrement
    ++b;
    cout << "preincrement: " << ++b << endl; // 7
    cout << b << endl;                       // 7

    // postdecrement
    a--;
    cout << "postdecrement: " << a-- << endl; // 6
    cout << a << endl;                        // 5

    // predecrement
    --b;
    cout << "predecrement: " << --b << endl; // 5
    cout << b << endl;                       // 5

    return 0;
}