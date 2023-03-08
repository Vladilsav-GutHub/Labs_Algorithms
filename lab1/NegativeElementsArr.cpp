#include "functions.h"

int NegativeElementsArr(int array[], const int SIZE) {

	auto is_negative = [](int n) { return n < 0; };
	return count_if(array, array + SIZE, is_negative);

}