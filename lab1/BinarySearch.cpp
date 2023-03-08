#include "functions.h"

int BinarySearch(int array[], const int SIZE, int key) {

    int low = 0, high = SIZE - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == key) {
            return mid;
        }
        else if (array[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}