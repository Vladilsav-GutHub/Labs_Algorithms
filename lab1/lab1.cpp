#include <iostream>
#include <ctime>
#include <cstdlib>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    
    const int SIZE = 10;
    int arr[SIZE], sum = 0, proizved = 1;
    int startIndex, endIndex;
    int n;
    int size = 10;

    cout << "Сгенерированный одномерный массив: " << endl;

    GenerateRandomElementsArr(arr, SIZE);

    cout << "Введите начальный элемент: ";
    cin >> startIndex;

    cout << "Введите конечный элемент: ";
    cin >> endIndex;

    if (startIndex < 0 || endIndex >= SIZE || startIndex > endIndex) {
        cout << "Ошибка: некорректный диапозон индексов" << "\n";
        return 1;
    }
 
    sum = SumRangeArray(arr, startIndex, endIndex);

    proizved = ProizvedRangeArr(arr, startIndex, endIndex);

    cout << "Сумма элементов в заданном диапозоне [" << startIndex << ", " << endIndex << "] = " << sum << endl;
    cout << "Произведение элементов в заданном диапозоне [" << startIndex << ", " << endIndex << "] = " << proizved << endl;


    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = 1 + rand() % 5;
    }
    cout << "Начальный массив: " << endl;

    print_array(arr, size);


}