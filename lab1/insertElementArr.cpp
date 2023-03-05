#include "functions.h"


int print_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}

// ������� ������� �������� � ������
int insert_element(int arr[], int& size, int value, int index, const int SIZE) {
    if (index < 0 || index > size) {
        cout << "������: ������������ ������ �������" << endl;
        return 0;
    }
    if (size == SIZE) {
        cout << "������: ������ �����, ���������� �������� �������" << endl;
        return 0;
    }
    // �������� ��� �������� ������� ������ �� ���������� ������� �� ���� ������� ������
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    // ��������� ����� ������� �� ��������� �������
    arr[index] = value;
    size++; // ����������� ������ ������� �� 1
}