#include "functions.h"

int CountZeroElementsArr(int array[], const int SIZE) {
	auto is_zero = [](int n) { return n == 0; };
	return count_if(array, array + SIZE, is_zero);
}