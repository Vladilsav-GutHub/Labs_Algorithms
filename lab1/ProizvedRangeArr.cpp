#include "functions.h"

int ProizvedRangeArr(int arr[], int startIndex, int endIndex) {

	int proizved = 1;

	for (int i = startIndex; i <= endIndex; i++)
	{
		proizved *= arr[i];
	}

	return proizved;
}