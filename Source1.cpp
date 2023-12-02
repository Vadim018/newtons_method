#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

float f(float x)
{
    return sqrt(1 - x) - tan(x);

}

float fp(float x)
{
    return sqrt(1 - x) - tan(x);

}

float MethodHord(float a, float b, float eps)
{
    int ii = 0;
    float c;
    do
    {
        c = a - f(a) * (b - a) / (f(b) - f(a));
        if (f(a) * f(c) < 0)
        {
            b = c;
        }

        else
        {
            a = c;
        }
        ii++;
    } while (fabs(f(c)) > eps);
    cout << "Кількість ітерацій: " << ii << endl;
    return c;
}

float MethodNewtona(float a, float eps)
{
    int ii = 0;
    do
    {
        a = a - f(a) / fp(a);
        ii++;
    } 
    while (fabs(f(a)) > eps);
    cout << "Ітерацій: " << ii << endl;
    return a;
}

int main()
{
    float a, b, eps = 0.001;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "HORD x = " << MethodHord(a, b, eps) << "\n\n";
    cout << "NEWTON x = " << MethodNewtona(a, eps) << "\n";
    system("pause");
}