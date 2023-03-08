#include "functions.h"

void sum_of_positive_elements(double arr[], const int SIZE) {
    
    double sum = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    cout << "Сумма положительных элементов массива = " << sum << endl;

}
