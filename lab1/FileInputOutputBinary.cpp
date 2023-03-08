#include "functions.h"
#include <fstream>

int FileInputOutputBinary(int array[], int n, const int MAX_SIZE) {

	array[MAX_SIZE];

	ofstream outFile("C:/Users/admin/Documents/data.bin", ios::binary);
	ifstream inFile("C:/Users/admin/Documents/data.bin", ios::binary);

    // ¬вод элементов массива и запись в файл
    cout << "¬ведите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        outFile.write((char*)&array[i], sizeof(array[i]));
    }
    outFile.close();

    // „тение элементов массива из файла и вывод
    cout << "Ёлементы массива из файла: ";
    for (int i = 0; i < n; i++) {
        inFile.read((char*)&array[i], sizeof(array[i]));
        cout << array[i] << " ";
    }
    cout << endl;
    inFile.close();

    return 0;

}