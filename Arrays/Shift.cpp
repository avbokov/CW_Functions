#include"Shift.h"

// Сдвиг массива влево

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(long long arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];

		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];

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

void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0][0];

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

void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0][0];

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

void shiftLeft(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[0][0];

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

void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];

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

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(long long arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];

		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];

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

void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];

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

void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[ROWS - 1][COLS - 1];

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

void shiftRight(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		long long buffer = arr[ROWS - 1][COLS - 1];

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

void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];

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