#include"Statistics.h"

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
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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