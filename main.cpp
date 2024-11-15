#include "sort_algorithms.h"
#include "array_manager.h"
#include "sort_factory.h"
#include "utils.h"

int main() {
    const int size = 10;
    int* arr = createRandomArray(size, 1, 100);
    int* reversedArr = createReversedArray(size);
    int* duplicateArr = createDuplicateArray(size, 42);

    printArray(arr, size);
    printArray(reversedArr, size);
    printArray(duplicateArr, size);

    SortFunction sorter = getSortFunction("selection");
    sorter(arr, size);
    printArray(arr, size);
    std::cout << "Array sorted: " << (isArraySorted(arr, size) ? "Yes" : "No") << std::endl;

    sorter = getSortFunction("insertion");
    sorter(reversedArr, size);
    printArray(reversedArr, size);

    delete[] arr;
    delete[] reversedArr;
    delete[] duplicateArr;

    return 0;
}