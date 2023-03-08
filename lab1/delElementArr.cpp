#include "functions.h"

int del(int array[], int& size, int element) {
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element) {
			// начинаем сдвиг элементов массива влево
			for (int j = i; j < size - 1; j++)
			{
				array[j] = array[j + 1];
			}
			size--; // уменьшаю размер массива
			i--; // сдвигаю индекс на одну позицию, чтобы не пропустить следующий элемент
		}
	}

	return 0;

}
