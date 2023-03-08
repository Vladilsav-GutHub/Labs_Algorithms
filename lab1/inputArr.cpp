#include "functions.h"

int inputArr(int array[], int n) {

	cout << "Введите " << n << " элементов массива\n";

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	cout << "Результат: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}
