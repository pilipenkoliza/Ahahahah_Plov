#include <iostream>

using namespace std;

struct primer {
	int odin;
	int dva;
	int znak;
};

typedef float (*Function)(float a, float b);

float Plus(float a, float b)
{
	return a + b;
}

float Minus(float a, float b)
{
	return a - b;
}

float Ymn(float a, float b)
{
	return a * b;
}

float Del(float a, float b)
{
	return a / b;
}

Function operators[] = {Plus, Minus, Ymn ,Del};

int main()
{
	setlocale(LC_ALL, "rus");
	float otvet;

	primer kalkulator;

	cout << "Первое число: ";
	cin >> kalkulator.odin;
	cout << "Второе число: ";
	cin >> kalkulator.dva;
	cout << "Оператор ( 0 = + , 1 = - , 2 = * , 3 = / ) : ";
	cin >> kalkulator.znak;

	otvet = operators[kalkulator.znak](kalkulator.odin, kalkulator.dva);

	cout << "Ответ: " << otvet << endl;
	return 0;
}
