#include "functions.h"

int GenerateRandomElementsArr(int arr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 1 + rand() % 5;

		cout << arr[i] << " ";
	}

	cout << "\n";

	return arr[SIZE];

}