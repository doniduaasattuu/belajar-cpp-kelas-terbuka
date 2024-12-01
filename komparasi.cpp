#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    bool hasil;
    // komparasi, relation expression

    // sebanding
    hasil = (a == b);
    cout << hasil << endl;

    // tidak sebanding
    hasil = (a != b);
    cout << hasil << endl;

    // kurang dari
    hasil = (a < b);
    cout << hasil << endl;

    // lebih dari
    hasil = (a > b);
    cout << hasil << endl;

    // kurang dari sama dengan
    hasil = (a <= b);
    cout << hasil << endl;

    // lebih dari sama dengan
    hasil = (a >= b);
    cout << hasil << endl;

    cin.get();
    return 0;
}