#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "masukkan nilai : ";
    cin >> a;

    switch (a)
    {
    case 5:
        cout << "a = 5" << endl;
        break; // jika tidak ada "break" maka kode dibawah nya akan selalu di eksekusi
    case 4:
        cout << "a = 4" << endl;
        break;
    case 3:
        cout << "a = 3" << endl;
        break;
    case 2:
        cout << "a = 2" << endl;
        break;
    case 1:
        cout << "a = 1" << endl;
        break;

    default:
        cout << "default" << endl;
        break;
    }
    return 0;
}