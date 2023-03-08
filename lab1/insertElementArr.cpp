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

	// Проверяем, что массив не переполнен

	if (size >= MAX_SIZE)
	{
		cout << "Ошибка: массив переполнен!" << endl;
		return 0;
	}

	// Проверка корректности индекса

	if (index < 0 || index > size)
	{
		cout << "Ошибка: некорректный индекс." << endl;
		return 0;
	}

	// Сдвигаем элементы массива вправо от конца до индекса

	for (int i = size; i > index; i--)
	{
		array[i] = array[i - 1];
	}

	// Вставляем элемент на указанный индекс
	array[index] = element;

	// Увеличиваем размер массива на 1
	size++;
}
