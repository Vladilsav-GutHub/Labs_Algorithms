#include "functions.h"

int SumRangeArray(int arr[], int startIndex, int endIndex) {
	
	int sum = 0;

	for (int i = startIndex; i <= endIndex; i++)
	{
		sum += arr[i];
	}

	return sum;

}

bool inRange(int index, int startIndex, int endIndex) {

	return (index >= startIndex && index <= endIndex);

}