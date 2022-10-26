#include <iostream>
#include <cmath>

using namespace std;


void kvadrat(double a, double b, double c) {

    double x;
    int D;

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "Первый корень равен " << x << endl;

        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "Второй корень равен " << x << endl;
    }
    if (D == 0)
    {
        x = (-1 * b) / (2 * a);
        cout << "Корень равен " << x << endl;
    }
    if (D < 0)
    {
        cout << "Дискриминант меньше 0, корни невещественные." << endl;
    }
    
}
int main()
{
    double a;
    double b;
    double c;

    setlocale(LC_ALL, "Russian");

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;

    kvadrat(a ,b ,c);

    return 0;
}
