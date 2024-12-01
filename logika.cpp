#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    bool hasil;

    // not
    hasil = !(a == 3);
    cout << hasil << endl; // 0

    // and
    hasil = (a == 3) && (b == 2);
    cout << hasil << endl; // 1
    hasil = (a == 4) && (b == 2);
    cout << hasil << endl; // 1
    // tidak bisa pakai "and"

    // or
    hasil = (a == 3) || (b == 2);
    cout << hasil << endl; // 1
    hasil = (a == 4) || (b == 2);
    cout << hasil << endl; // 1
    // tidak bisa pakai "or"

    return 0;
}