// Declaration of variable: объявления переменной
					//type name;


// Declaration of array
					//type name [SIZE];


// Declaration and definition of function:
					//type (name parameters)  Function header - заголовок функции
//{
// тело функции Function body
// ....
//	group-of-statements
// ....
//}
// return; // так пишут return в void функциях.

#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

int Add(int a, int b); // Прототип функции (объявление функции - )
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

// Параметры по умолчанию
double Power(double a, int n = 2);
// если в функцию передать одно число, то она возведёт в квадрат

int factorial(int n);

void main()
{ 
	setlocale(LC_ALL, "Russian");

	cout << Power(5, 3) << endl;
	cout << factorial(5) << endl;

	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	//int c = a + b;
	int c = Add(a, b); // Использование функции, (вызов функции, function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
	

}
// additional - сложение
int Add(int a, int b) 
{
	// В теле функции мы определяем, что делает эта функция
	// Реализуем алгоритм, возложенный на функцию
	int c = a + b;
	return c;
	// В теле функции можно писать всё, что угодно, кроме РЕАЛИЗАЦИИ другой функции
}

int Sub(int a, int b) // subtraction - вычитание
{
	return a - b;
}

int Mul(int a, int b) // multiplication - умножение
{
	return a * b;
}

double Div(int a, int b) // division - деление
{
	return (double)a / b;
}

double Power(double a, int n) // division - деление
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}

