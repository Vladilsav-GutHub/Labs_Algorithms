#include "functions.h"

int inputArr(int array[], int n) {

	cout << "������� " << n << " ��������� �������\n";

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	cout << "���������: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}