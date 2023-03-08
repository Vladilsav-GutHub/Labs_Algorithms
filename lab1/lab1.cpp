#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
        
    int task;
    const int MAX_SIZE = 11;
    const int SIZE = 10;
    int arr[SIZE];

    int startIndex, endIndex, sum = 0, proizved = 1, size = 0, m = 3, n;
    int count_pos, count_neg, count_zeroes, count_mult;
    int result;

    double min_value = -10.0;
    double max_value = 10.0;

    double min_val, max_val;

    cout << "Выберите задание: ""\n";

    cout << "1. Заполнение одномерного массива случайными числами" << "\n";
    cout << "2. Вычисление суммы, произведения элементов одномерного массива в заданном диапозоне индексов" << "\n";
    cout << "3. Вставка элемента массива на основе алгоритмов сдвига" << "\n";
    cout << "4. Удаление элемента массива на основе алгоритмов сдвига" << "\n";
    cout << "5. Сортировка массива пузырьком (Bubble Sort)" << "\n";
    cout << "6. Сортировка массива выбором (Selection Sort)" << "\n";
    cout << "7. Сортировка массива вставками (Insertion Sort)" << "\n";
    cout << "8. Алгоритм линейного поиска минимального и максимального элемента" << "\n";
    cout << "9. Алгоритм бинарного поиска по заданному ключу" << "\n";
    cout << "10. Подсчёт кол-ва элементов с указанной характеристикой (положительные)" << "\n";
    cout << "11. Подсчёт кол-ва элементов с указанной характеристикой (отрицательные)" << "\n";
    cout << "12. Подсчёт кол-ва элементов с указанной характеристикой (подсчёт нулевых элементов)" << "\n";
    cout << "13. Подсчёт кол-ва элементов с указанной характеристикой (кратные m)" << "\n";
    cout << "14. Считать элементы массива с клавиатуры и вывести их" << "\n";
    cout << "15. Файловый ввод/вывод элементов массива с использованием текстовых файлов" << "\n";
    cout << "16. Файловый ввод/вывод элементов массива с использованием бинарных файлов" << "\n";
    cout << "17. БОНУСНОЕ ЗАДАНИЕ. Вариант 2 (в одномерном массиве, состоящем из n вещественных элементов, вычислить: 1) сумму положительных элементов массива; 2) произведение элементов массива, расположенных между максимальным по модулю и минимальным по модулю элементами. Упорядочить элементы массива по убыванию.)" << "\n";

    cin >> task;

    switch (task)
    {
    
    case 1:

        cout << "Сгенерированный одномерный массив: " << endl;

        GenerateRandomElementsArr(arr, SIZE);

        break;

    case 2:

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

        cout << isSumRangeZero(arr, startIndex, endIndex) << endl;

        cout << ProizvedRangeArr(arr, size, startIndex, endIndex, result);

        break;

    case 3:
                
        int array[MAX_SIZE];

        cout << "Сгенерированный одномерный массив для вставки: " << "\n";
        print_array(array, size, SIZE);

        int index, element;
        cout << "Введите индекс для вставки: ";
        cin >> index;

        cout << "Введите значение для вставки: ";
        cin >> element;

        // вставляю элемент на указанный индекс
        insert(array, size, index, element);

        cout << "Результат вставки: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }

        cout << endl;

        break;

    case 4:

        cout << "Сгенерированный одномерный массив для удаления элемента: " << "\n";
        print_array(array, size, SIZE);

        cout << "Введите элемент, который нужно удалить: ";
        cin >> element;

        del(array, size, element);

        cout << "result" << endl;

        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }

        break;

    case 5:

        cout << "Сгенерированный одномерный массив для сортировки пузырьком: " << "\n";
        print_array(array, size, SIZE);

        BubleSort(array, size);

        cout << "Отсортированный массив: " << endl;

        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }

        break;

    case 6:

        cout << "Сгенерированный одномерный массив для сортировки выбором (Selection Sort): " << "\n";
        print_array(array, size, SIZE);

        SelectionSort(array, size);

        cout << "Отсортированный массив: " << endl;

        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }

        break;

    case 7:

        cout << "Сгенерированный одномерный массив для сортировки вставками (Insertion Sort): " << "\n";
        print_array(array, size, SIZE);

        InsertionSort(array, size);

        cout << "Отсортированный массив: " << endl;

        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }

        break;

    case 8:

        cout << "Сгенерированный одномерный массив для алгоритма линейного поиска " << "\n";
        print_array(array, size, SIZE);

        LinearSearchMinMax(array, size);

        break;

    case 9:

        cout << "Сгенерированный одномерный массив для алгоритма бинарного поиска " << "\n";
  
        int key, idx;

        sort(array, array + SIZE);

        print_array(array, size, SIZE);

        cout << "Введите ключ: ";
        cin >> key;

        idx = BinarySearch(array, SIZE, key);

        // Вывод результата

        if (idx == -1) {
            cout << "Элемент не найден" << endl;
        }
        else {
            cout << "Элемент найден на позиции " << idx << endl;
        }

        break;

    case 10:

        cout << "Сгенерированный одномерный массив для подсчёта кол-во элементов (положительных) " << "\n";

        print_array(array, size, SIZE);

        count_pos = PositiveElementsArr(array, SIZE);
        cout << "Кол-во положительных элементов: " << count_pos << endl;

        break;

    case 11:

        cout << "Сгенерированный одномерный массив для подсчёта кол-во элементов (отрицательных) " << "\n";

        print_array(array, size, SIZE);

        count_neg = NegativeElementsArr(array, SIZE);
        cout << "Количество отрицательных элементов: " << count_neg << endl;

        break;

    case 12:

        cout << "Сгенерированный одномерный массив для подсчёта кол-во элементов (подсчёт нулевых элементов) " << "\n";

        print_array(array, size, SIZE);

        count_zeroes = CountZeroElementsArr(array, SIZE);
        cout << "Количество нулевых элементов: " << count_zeroes << endl;

        break;


    case 13:

        cout << "Сгенерированный одномерный массив для подсчёта кол-во элементов (кратные m)" << "\n";

        print_array(array, size, SIZE);

        count_mult = CountMultiples(array, SIZE, m);
        cout << "Количество элементов кратных m: " << m << ": " << count_mult << endl;

        break;

    case 14:

        cout << "Введите размер массива: ";
        cin >> n;

        inputArr(array, n);

        break;

    case 15:

        cout << "Введите размер массива: ";
        cin >> n;

       inputElementsArrTxtFile(array, n, MAX_SIZE);

        break;

    case 16:

        cout << "Введите размер массива: ";
        cin >> n;

        FileInputOutputBinary(array, n, MAX_SIZE);

        break;

    case 17:

        double arr[SIZE];

        GenerateDoubleArr(arr, SIZE);
    
        sum_of_positive_elements(arr, SIZE);

        double prod = prod_between_max_min(arr, SIZE);

        cout << "Произведение элементов между максимальным и минимальным элементами: " << prod << endl;

       BubleSortDouble(arr, SIZE);

       cout << "Отсортированный массив: " << endl;

       for (int i = 0; i < SIZE; i++)
       {
           cout << arr[i] << " ";
       }

        break;

    }

}