#include "functions.h"

int print_array(int array[], int& size, const int SIZE ) {

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = 10 - rand() % 25;
		size++;
	}

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	return 0;
}

int insert(int array[], int& size, int index, int element) {
	
	const int MAX_SIZE = 11;

	// ���������, ��� ������ �� ����������

	if (size >= MAX_SIZE)
	{
		cout << "������: ������ ����������!" << endl;
		return 0;
	}

	// �������� ������������ �������

	if (index < 0 || index > size)
	{
		cout << "������: ������������ ������." << endl;
		return 0;
	}

	// �������� �������� ������� ������ �� ����� �� �������

	for (int i = size; i > index; i--)
	{
		array[i] = array[i - 1];
	}

	// ��������� ������� �� ��������� ������
	array[index] = element;

	// ����������� ������ ������� �� 1
	size++;
}