#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan angka : ";
    cin >> a;

    // if statement
    if (a && a != 3)
    {
        cout << a << endl;
    }
    else if (a == 3)
    {
        cout << "nilai yang dimasukkan adalah 3";
    }
    else
    {
        cout << "tidak memasukkan nilai";
    }

    return 0;
}