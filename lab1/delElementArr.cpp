#include "functions.h"

int del(int array[], int& size, int element) {
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element) {
			// �������� ����� ��������� ������� �����
			for (int j = i; j < size - 1; j++)
			{
				array[j] = array[j + 1];
			}
			size--; // �������� ������ �������
			i--; // ������� ������ �� ���� �������, ����� �� ���������� ��������� �������
		}
	}

	return 0;

}