#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    do
    {
        cout << "Hello world - " << a << endl;
        a--;
    } while (a != 0);

    // minimal di eksekusi satu kali;
    do
    {
        cout << "Hello dunia" << endl;
    } while (false);

    cout << "\nProgram selesai";

    cin.get();
    return 0;
}