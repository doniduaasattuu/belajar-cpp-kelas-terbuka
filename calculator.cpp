#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator \n\n";

    cout << "Masukkan nilai pertama : ";
    cin >> a;

    cout << "Masukkan operator +,-,*,/: ";
    cin >> aritmatika;

    cout << "Masukkan nilai kedua: ";
    cin >> b;

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    default:
        break;
    }

    // if (aritmatika == '+')
    // {
    //     hasil = a + b;
    // }
    // else if (aritmatika == '-')
    // {
    //     hasil = a - b;
    // }
    // else if (aritmatika == '*')
    // {
    //     hasil = a * b;
    // }
    // else if (aritmatika == '/')
    // {
    //     hasil = a / b;
    // }
    // else
    // {
    //     hasil = 0;
    // }

    cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;

    return 0;
}