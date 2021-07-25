#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(int arr2D[][], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
double AVG(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight_V2(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	int number_of_shifts;
	
	const int ROWS = 8;
	const int COLS = 5;
	int arr2D[ROWS][COLS];	
		
	FillRand(arr, n);
	Print(arr, n);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	cout << endl << endl;
	shiftLeft(arr, n, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):";
	cout << endl << endl;
	Print(arr, n);

	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	cout << endl << endl;
	shiftRight(arr, n, number_of_shifts);
	cout << "Массив сдвинут вправо на " << number_of_shifts << " шаг(а)-(ов):";
	cout << endl << endl;
	Print(arr, n);

	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	cout << endl << endl;
	shiftRight_V2(arr, n, number_of_shifts);
	cout << "Массив сдвинут вправо на " << number_of_shifts << " шаг(а)-(ов):";
	cout << endl << endl;
	Print(arr, n);

	cout << endl << endl;
	cout << "Отсортируем массив по возрастанию: ";
	cout << endl << endl;
	Sort(arr, n);
	cout << endl;
	Print(arr, n);

	cout << endl << endl;
	cout << "Сумма элементов массива равна: " << Sum(arr, n) << endl;
	cout << endl << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(arr, n) << endl;
	cout << endl << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << endl << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;
		
	cout << endl << endl;

	const int B_SIZE = 8;
	int brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	cout << endl;
	Print(brr, B_SIZE);

	cout << endl << endl;
	cout << "Сумма элементов массива равна: " << Sum(brr, B_SIZE) << endl;
	cout << endl << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(brr, B_SIZE) << endl;
	cout << endl << endl;
	cout << "Минимальное значение: " << minValueIn(brr, B_SIZE) << endl;
	cout << endl << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, B_SIZE) << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(int arr2D[][], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr2D[i][j] = rand() % 100;
		}
		cout << endl;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int S = 0;
	
	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

double AVG(int arr[], const int n)
{
	double avg;

	avg = (double)Sum(arr, n) / n;

	return avg;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];

		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];

		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight_V2(int arr[], const int n, int number_of_shifts)
{
	number_of_shifts = n - number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
}