#include "functions.h"
#include <fstream>

int inputElementsArrTxtFile(int array[], int n, const int MAX_SIZE) {

	array[MAX_SIZE];

	ofstream outFile("C:/Users/admin/Documents/data.txt");
	ifstream inFile("C:/Users/admin/Documents/data.txt");

	// Ввод элементов массива и запись в файл
		cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		outFile << array[i] << " ";
	}
	outFile.close();

	// Чтение элементов массива из файла и вывод
	cout << "Элементы массива из файла: ";
	for (int i = 0; i < n; i++) {
		inFile >> array[i];
		cout << array[i] << " ";
	}
	cout << endl;
	inFile.close();

	return 0;
}
