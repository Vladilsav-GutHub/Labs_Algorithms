#include "functions.h"

int LinearSearchMinMax(int array[], int& size) {

	int min = array[0];
	int max = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}

		if (array[i] < min)
		{
			min = array[i];
		}
	}

	cout << "Минимальный элемент: " << min << endl;
	cout << "Максимальный элемент: " << max << endl;

	return min, max;

}