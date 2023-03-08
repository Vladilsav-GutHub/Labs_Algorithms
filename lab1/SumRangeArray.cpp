#include "functions.h"

int SumRangeArray(int arr[], int startIndex, int endIndex) {
	
	int sum = 0;

	for (int i = startIndex; i <= endIndex; i++)
	{
		sum += arr[i];
	}

	return sum;

}

bool isSumRangeZero(int arr[], int startIndex, int endIndex) {

	int sum = 0;

	for (int i = startIndex; i <= endIndex; i++) {
		sum += arr[i];
	}

	if (sum == 0) {
		return true;
	}
	else {
		return false;
	}

}