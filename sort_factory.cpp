#include "sort_factory.h"

SortFunction getSortFunction(const std::string& algorithm) {
    if (algorithm == "bubble") {
        return bubbleSort;
    } else if (algorithm == "quick") {
        return [](int arr[], int size) { quickSort(arr, 0, size - 1); };
    } else if (algorithm == "insertion") {
        return insertionSort;
    } else if (algorithm == "selection") {
        return selectionSort;
    } else {
        return nullptr;
    }
}