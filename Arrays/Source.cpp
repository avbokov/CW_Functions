﻿#include<iostream>
#include<ctime>


using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(long long arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(long long arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double AVG(T arr[], const int n);
template<typename T>double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);


void shiftRight_V2(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "Russian");
	int number_of_shifts;

	/*const int n = 5;
	int arr[n];
				
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
	cout << "Максимальное значение: " << maxValueIn(brr, B_SIZE) << endl;*/

	const int D_SIZE = 5;
	int i_arr[D_SIZE];
	double d_arr[D_SIZE];
	float f_arr[D_SIZE];
	long long ll_arr[D_SIZE];
	char c_arr[D_SIZE];

	// Проверочный код для одномерного массива

	cout << "Одномерный массив int:" << endl << endl;
	FillRand(i_arr, D_SIZE);
	Print(i_arr, D_SIZE);
	cout << endl << endl;
	Sort(i_arr, D_SIZE);
	Print(i_arr, D_SIZE);
	cout << endl << endl;
	cout << "Сумма элементов массива равна: " << Sum(i_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(i_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr, D_SIZE) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(i_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(i_arr, D_SIZE);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(i_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(i_arr, D_SIZE);

	cout << endl << endl;

	cout << "Одномерный массив double:" << endl << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << endl << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << endl << endl;
	cout << "Сумма элементов массива равна: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr, D_SIZE) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(d_arr, D_SIZE);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(d_arr, D_SIZE);

	cout << endl << endl;

	cout << "Одномерный массив float:" << endl << endl;
	FillRand(f_arr, D_SIZE);
	Print(f_arr, D_SIZE);
	cout << endl << endl;
	Sort(f_arr, D_SIZE);
	Print(f_arr, D_SIZE);
	cout << endl << endl;
	cout << "Сумма элементов массива равна: " << Sum(f_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(f_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(f_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(f_arr, D_SIZE) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(f_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(f_arr, D_SIZE);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(f_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(f_arr, D_SIZE);

	cout << endl << endl;

	cout << "Одномерный массив long long:" << endl << endl;
	FillRand(ll_arr, D_SIZE);
	Print(ll_arr, D_SIZE);
	cout << endl << endl;
	Sort(ll_arr, D_SIZE);
	Print(ll_arr, D_SIZE);
	cout << endl << endl;
	cout << "Сумма элементов массива равна: " << Sum(ll_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(ll_arr, D_SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(ll_arr, D_SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(ll_arr, D_SIZE) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(ll_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(ll_arr, D_SIZE);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(ll_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(ll_arr, D_SIZE);

	cout << endl << endl;

	cout << "Одномерный массив char:" << endl << endl;
	FillRand(c_arr, D_SIZE);
	Print(c_arr, D_SIZE);
	cout << endl << endl;
	Sort(c_arr, D_SIZE);
	Print(c_arr, D_SIZE);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(c_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(c_arr, D_SIZE);
	cout << endl << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(c_arr, D_SIZE, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(c_arr, D_SIZE);

	cout << endl << endl;

	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	float f_arr_2[ROWS][COLS];
	long long ll_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];

	// Проверочный код для двумерного массива

	cout << "Двумерный массив int:" << endl << endl;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(i_arr_2, ROWS, COLS);
	
	cout << endl;

	cout << "Двумерный массив double:" << endl << endl;
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(d_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(d_arr_2, ROWS, COLS);
	
	cout << endl;
	
	cout << "Двумерный массив float:" << endl << endl;
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << endl;
	Sort(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(f_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(f_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(f_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(f_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(f_arr_2, ROWS, COLS);

	cout << endl;

	cout << "Двумерный массив long long:" << endl << endl;
	FillRand(ll_arr_2, ROWS, COLS);
	Print(ll_arr_2, ROWS, COLS);
	cout << endl;
	Sort(ll_arr_2, ROWS, COLS);
	Print(ll_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива равна: " << Sum(ll_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно: " << AVG(ll_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(ll_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(ll_arr_2, ROWS, COLS) << endl << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(ll_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(ll_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(ll_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(ll_arr_2, ROWS, COLS);

	cout << endl;

	cout << "Двумерный массив char:" << endl << endl;
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(c_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(c_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Введите количество шагов для сдвига вправо: "; cin >> number_of_shifts;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Массив сдвинут влево на " << number_of_shifts << " шаг(а)-(ов):" << endl << endl;
	Print(c_arr_2, ROWS, COLS);
}

// Заполнение массива случайными значениями

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100; // знаки до запятой и после
	}
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100; // знаки до запятой и после
	}
}

void FillRand(long long arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (91 - 65) + 65; // для наглядности латинские буквы (A - 65 .... Z - 90)
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 10000) / 100;
		}
	}
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = float(rand() % 10000) / 100;
		}
	}
}

void FillRand(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (91 - 65) + 65; // для наглядности латинские буквы (A - 65 .... Z - 90)
		}
	}
}

// Вывод массива на экран

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

// Сортировка массива по возрастанию (алфавиту)

template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

// Сумма значений элементов массива

template<typename T>T Sum(T arr[], const int n)
{
	T S = 0;
	
	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;

}

template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

// Среднее арифметическое значений элементов массива

template<typename T>double AVG(T arr[], const int n)
{
	double avg;
	avg = (double)Sum(arr, n) / n;
	return avg;
	// return Sum(arr, n) / n; - более короткий вариант записи
}

template<typename T>double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
	return avg;
}

// Минимальное значение элементов массива

template<typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

// Максимальное значение элементов массива

template<typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}



// Сдвиг массива влево

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];

		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

// Сдвиг массива вправо

template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];

		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buffer;
	}
}

// Сдвиг массива вправо_V2

void shiftRight_V2(int arr[], const int n, int number_of_shifts)
{
	number_of_shifts = n - number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
}