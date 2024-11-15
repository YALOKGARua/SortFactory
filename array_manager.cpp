#include "array_manager.h"
#include <cstdlib>

int* createRandomArray(int size, int min, int max) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = min + rand() % (max - min + 1);
    }
    return arr;
}

int* createReversedArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = size - i;
    }
    return arr;
}

int* createDuplicateArray(int size, int value) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = value;
    }
    return arr;
}

int* copyArray(const int arr[], int size) {
    int* newArr = new int[size];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    return newArr;
}

bool isArraySorted(const int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}