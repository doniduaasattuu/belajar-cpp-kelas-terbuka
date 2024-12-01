#include <iostream>
#include "enter.cpp"

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "i = " << i << endl;
    }

    enter();

    int total = 0;
    for (int i = 1; i <= 10; i++, total += i)
    {
        cout << i << " || " << total << endl;
    }

    cout << "\nProgram selesai";

    return 0;
}