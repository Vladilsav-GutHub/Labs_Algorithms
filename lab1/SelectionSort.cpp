#include "functions.h"

int SelectionSort(int array[], int& size) {
	
	int min_idx;

	for (int i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (int j = i+1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}

			int temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
		}
	}

	return 0;
}