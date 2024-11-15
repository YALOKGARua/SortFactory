#ifndef ARRAY_MANAGER_H
#define ARRAY_MANAGER_H

int* createRandomArray(int size, int min, int max);
int* createReversedArray(int size);
int* createDuplicateArray(int size, int value);
int* copyArray(const int arr[], int size);
bool isArraySorted(const int arr[], int size);

#endif