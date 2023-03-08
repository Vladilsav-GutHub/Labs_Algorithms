#include "functions.h"

double prod_between_max_min(double arr[], const int SIZE) {

    // Ќаходим индексы максимального и минимального элементов по модулю
    int max_idx = 0, min_idx = 0;
    for (int i = 1; i < SIZE; i++) {
        if (abs(arr[i]) > abs(arr[max_idx])) {
            max_idx = i;
        }
        if (abs(arr[i]) < abs(arr[min_idx])) {
            min_idx = i;
        }
    }

    // ≈сли максимальный и минимальный элементы расположены не в пор€дке возрастани€ индексов,
    // мен€ем их местами
    if (min_idx > max_idx) {
        int temp = max_idx;
        max_idx = min_idx;
        min_idx = temp;
    }

    // ¬ычисл€ем произведение элементов между максимальным и минимальным элементами
    double prod = 1.0;
    for (int i = min_idx + 1; i < max_idx; i++) {
        prod *= arr[i];
    }

    return prod;

}


double BubleSortDouble(double arr[], const int SIZE) {

    for (double i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return 0;
}