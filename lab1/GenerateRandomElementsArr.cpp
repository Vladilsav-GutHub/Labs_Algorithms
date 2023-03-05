#include "functions.h"

int GenerateRandomElementsArr(int arr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 1 + rand() % 5;

		cout << arr[i] << setw(5);
	}

	cout << "\n";

	return arr[SIZE];

}