#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 4;
    int hasil;

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // pembagian
    float result = a / b; // 1 bukan 1.5, int / int = int - float / int = float
    cout << a << " / " << b << " = " << result << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b) * a;
    cout << "(" << a << " + " << b << ")" << " x " << a << " = " << hasil << endl;

    cin.get();
    return 0;
}