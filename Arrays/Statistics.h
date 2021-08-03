#pragma once
#include"stdafx.h"

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
long long Sum(long long arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long Sum(long long arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
float AVG(float arr[], const int n);
double AVG(long long arr[], const int n);

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);
float AVG(float arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(long long arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
long long minValueIn(long long arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long minValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
long long maxValueIn(long long arr[], const int n);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long maxValueIn(long long arr[ROWS][COLS], const int ROWS, const int COLS);