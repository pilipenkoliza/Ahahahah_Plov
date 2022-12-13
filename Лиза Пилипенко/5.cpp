#include <iostream>

using namespace std;

struct primer {
	int odin;
	int dva;
	int znak;
};

typedef int (*Function)(int a, int b);

int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int Ymn(int a, int b)
{
	return a * b;
}

int Del(int a, int b)
{
	return a / b;
}

Function operators[] = {Plus, Minus, Ymn ,Del};

int main()
{
	setlocale(LC_ALL, "rus");
	int otvet;

	primer kalkulator;

	cout << "Первое число: ";
	cin >> kalkulator.odin;
	cout << "Второе число: ";
	cin >> kalkulator.dva;
	cout << "Оператор ( 0 = + , 1 = - , 2 = * , 3 = / ) : ";
	cin >> kalkulator.znak;

	otvet = operators[kalkulator.znak](kalkulator.odin, kalkulator.dva);

	cout << "Ответ: " << otvet << endl;
}
