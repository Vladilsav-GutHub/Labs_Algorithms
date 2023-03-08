#include "functions.h"

int PositiveElementsArr(int array[], const int SIZE) {

	auto is_positive = [](int n) { return n > 0; };
	return count_if(array, array + SIZE, is_positive);

}