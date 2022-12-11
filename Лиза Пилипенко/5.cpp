#include <iostream>
#include <math.h>

using namespace std;
void Sum() {
    int sum = 0;
    int n, a;
    cout << "Колличество чисел: ";
    cin >> n;
    cout << "Введите числа: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum = sum + a;
    }
    cout << "Результат: " << sum << endl;
}
void Razn() {
    int a, b, razn;
    cout << "Введите два числа: ";
    cin >> a >> b;
    razn = a - b;
    cout << "Результат: " << razn << endl;
}
void Ymn() {
    int ymn = 1;
    int n, a;
    cout << "Колличество чисел: ";
    cin >> n;
    cout << "Введите числа: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ymn = ymn * a;
    }
    cout << "Результат: " << ymn << endl;
}
void Del() {
    int a, b;
    float delen = 0;
    cout << "Введите два числа: ";
    cin >> a >> b;
    delen = a / b;
    cout << "Результат: " << delen << endl;
}
void Sqrt() {
    int a, sq;
    cout << "Введите число для нахождения его квадрата: ";
    cin >> a;
    sq = a * a;
    cout << "Результат: " << sq << endl;
}
void Koren() {
    int a;
    float kv;
    cout << "Введите число для нахождения его корня: ";
    cin >> a;
    kv = sqrt(a);
    cout << "Результат: " << kv << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    char sign;
    cout << "Введите знак оператора: ";
    cin >> sign;
    switch (sign) {
    case '+':
        Sum();
        break;
    case '-':
        Razn();
        break;
    case '*':
        Ymn();
        break;
    case '/':
        Del();
        break;
    case 'kv':
        Sqrt();
        break;
    case 'sqrt':
        Koren();
        break;
    default:
        cout << "Ошибка. Оператор не опознан." << endl;
        break;
    }
    return 0;
}
