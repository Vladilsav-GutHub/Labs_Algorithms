#include "functions.h"

int ProizvedRangeArr(int arr[], int startIndex, int endIndex) {

	int proizved = 1;

	for (int i = startIndex; i <= endIndex; i++)
	{
		proizved *= arr[i];
	}

	return proizved;
}

bool ProizvedRangeArr(int arr[], int size, int startIndex, int endIndex, int& result)
{
    // ���������, ��� ������� ��������� � ���������� ���������
    if (startIndex < 0 || startIndex >= size || endIndex < 0 || endIndex >= size || startIndex > endIndex)
    {
        return false; // ���������� false, ���� ������� �����������
    }

    int proizved = 1;

    for (int i = startIndex; i <= endIndex; i++)
    {
        proizved *= arr[i];
    }

    result = proizved; // �������� ��������� ����� ������

    return true; // ���������� true, ���� ������� ������� ����������
}
