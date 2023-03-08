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
    // проверяем, что индексы находятся в допустимом диапазоне
    if (startIndex < 0 || startIndex >= size || endIndex < 0 || endIndex >= size || startIndex > endIndex)
    {
        return false; // возвращаем false, если индексы некорректны
    }

    int proizved = 1;

    for (int i = startIndex; i <= endIndex; i++)
    {
        proizved *= arr[i];
    }

    result = proizved; // передаем результат через ссылку

    return true; // возвращаем true, если функция успешно отработала
}
