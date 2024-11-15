#ifndef SORT_FACTORY_H
#define SORT_FACTORY_H

#include <string>
#include "sort_algorithms.h"

typedef void (*SortFunction)(int arr[], int size);

SortFunction getSortFunction(const std::string& algorithm);

#endif