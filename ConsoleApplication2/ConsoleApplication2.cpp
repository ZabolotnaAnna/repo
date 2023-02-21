#include<iostream>
#include<Windows.h>
using namespace std;
double fabs_my(double q) {
    double res;
    if (q < 0)
        res = -q;
    else
        res = q;
    return res;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, h;
    cout << "Введіть інтервал [а;b] і крок h зі змінами х" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;

    if ((a <= b) && (h > 0))
    {
        cout << "Результат обчислень: " << endl;
        for (float x = a; x <= b; x += h)
        {
            if (x > 9)
            {
                cout << "x = " << x << "   F(x) = "
                    << log(fabs_my(cos(x))) + log(fabs_my(sin(x))) + 2 * x * exp(x) - 3.7 << endl;
            }
            else if ((x > 0) && (x <= 9)) { cout << "x = " << x << "   F(x) = " << 2 * x * x << endl; }
            else if (x <= 0) { cout << "x = " << x << "   F(x) = " << (x - 1) << endl; }
        }
    }
    else if (a > b) cout << "Введіть правильно інтервал";
    else if (h < 0) cout << "Крок не може бути від'ємним";
    else if (h == 0) cout << "Крок не может быть нульовим";
}