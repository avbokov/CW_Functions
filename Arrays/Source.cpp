#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"


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