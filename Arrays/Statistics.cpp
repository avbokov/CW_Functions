#include"Statistics.h"

// Сумма значений элементов массива

int Sum(int arr[], const int n)
{
	int S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;

}

double Sum(double arr[], const int n)
{
	double S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

float Sum(float arr[], const int n)
{
	float S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

long long Sum(long long arr[], const int n)
{
	long long S = 0;

	for (int i = 0; i < n; i++)
	{
		S = S + arr[i];
	}
	return S;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float S = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			S = S + arr[i][j];
		}
	}
	return S;
}

long long Sum(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long S = 0;

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

double AVG(int arr[], const int n)
{
	double avg;
	avg = (double)Sum(arr, n) / n;
	return avg;
	// return Sum(arr, n) / n; - более короткий вариант записи
}

double AVG(double arr[], const int n)
{
	double avg;
	avg = (double)Sum(arr, n) / n;
	return avg;
}

float AVG(float arr[], const int n)
{
	float avg;
	avg = (float)Sum(arr, n) / n;
	return avg;
}

double AVG(long long arr[], const int n)
{
	double avg;
	avg = Sum(arr, n) / n;
	return avg;
}

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

float AVG(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float avg;
	avg = (float)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

double AVG(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return avg;
}

// Минимальное значение элементов массива

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

double minValueIn(double arr[], const int n)
{
	double min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

long long minValueIn(long long arr[], const int n)
{
	long long min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];

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

double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];

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

float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];

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

long long minValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long min = arr[0][0];

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

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float maxValueIn(float arr[], const int n)
{
	float max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

long long maxValueIn(long long arr[], const int n)
{
	long long max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];

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

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];

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

float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];

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

long long maxValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long max = arr[0][0];

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