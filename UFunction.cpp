#include "UFunction.h"

int *create(int n)
{
	int* arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) arr[i] = rand() % 30;
	return arr;
}

void (*summa(int* arr, int n))(int*, int)
{
	int S = 0;
	for (int i = 0; i < n; i++) S += arr[i];
	if (S == arr[0]) {
		return &inv;
	}
	else if (S > arr[0]) {
		return &reach;
	}
	else {
		return &down;
	}
}

void inv(int* arr, int n)
{
	int* help_arr = new int[n];
	int j = n;
	for (int i = 0; i < n / 2; i++, j--)
		help_arr[i] = arr[i];
	for (int i = 0; i < n; i++)
		arr[i] = help_arr[abs(19 - i)];
	delete[] help_arr;
}

void reach(int* arr, int n)
{
	int a = 1;
	while (a > 0) {
		a = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int b = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = b;
				a += 1;
			}
		}

	}
}

void down(int* arr, int n)
{
	int a = 1;
	while (a > 0) {
		a = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] < arr[i + 1]) {
				int b = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = b;
				a += 1;
			}
		}

	}
}

void out(int* arr, int n)
{
	for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
	std::cout << "\n";
}

void activation(void(*uk)())
{
	uk();
}
