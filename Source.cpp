#include <iostream>
#include <conio.h>
using namespace std;

double function(double x)
{
    double f;
    f = pow(x, 3) - 10 * x + 2;
    return f;
}

double function1(double x)
{
    return;
}

double function2(double x)
{
    return;
}

int main()
{
    setlocale(LC_ALL, "Ukr");
    double a, b, c, e, n;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Похибка = ";
    cin >> e;
    if (function(a) * function2(a) > 0)
        c = a;
    else 
        c = b;
    do
    {
        c = c - function(c) / function1(c);
        n += 1;
    }
    while (fabs(function(c)) >= e);
    cout << "c = " << c << "\n";
    cout << "n = " << n << "\n";
    return 0;
}