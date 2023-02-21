#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Задание ABC!\n";
    int x, y, s, z;
    cout << "Введите число A: ";
    cin >> x;
    cout << "Введите число B: ";
    cin >> y;
    cout << "Введите число C: ";
    cin >> z;
    cout << "A = " << x << " В = " << y << " C = " << z << endl;
        if (z < y)
        {
            s = z;
            z = y;
            y = s;
        }
        if (z < x)
        {
            s = z;
            z = x;
            x = s;
        }
        if (y < x)
        {
            s = y;
            y = x;
            x = s;
        }
        cout << "A = " << x << " В = " << y << " C = " << z << endl;



}