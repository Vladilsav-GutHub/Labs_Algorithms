#include "functions.h"

int InsertionSort(int array[], int& size) {

	int j, temp;

	for (int i = 1; i < size; i++)
	{
		temp = array[i];
		j = i - 1;

		while (j >= 0 && array[j] > temp)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = temp;
	}

	return 0;
}