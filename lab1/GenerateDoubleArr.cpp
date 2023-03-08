#include "functions.h"

double random_double() {
	return static_cast<double>(rand()) / RAND_MAX;
}

void GenerateDoubleArr(double arr[], const int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		arr[i] = random_double();

	}
	// Выводим сгенерированный массив на экран
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n";
}