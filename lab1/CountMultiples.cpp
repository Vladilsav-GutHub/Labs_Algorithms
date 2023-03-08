#include "functions.h"

int CountMultiples(int array[], const int SIZE, int m) {
	auto is_multiple = [m](int n) { return n % m == 0; }; // лямбда, вот и предикат
	return count_if(array, array + SIZE, is_multiple);
}