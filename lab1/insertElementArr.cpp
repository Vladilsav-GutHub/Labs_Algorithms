#include "functions.h"


int print_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}

// Функция вставки элемента в массив
int insert_element(int arr[], int& size, int value, int index, const int SIZE) {
    if (index < 0 || index > size) {
        cout << "Ошибка: недопустимый индекс вставки" << endl;
        return 0;
    }
    if (size == SIZE) {
        cout << "Ошибка: массив полон, невозможно вставить элемент" << endl;
        return 0;
    }
    // Сдвигаем все элементы массива справа от указанного индекса на одну позицию вправо
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    // Вставляем новый элемент на указанную позицию
    arr[index] = value;
    size++; // Увеличиваем размер массива на 1
}