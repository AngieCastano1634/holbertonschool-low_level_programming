#ifndef _SEARCH_ALGORITHMS_
#define _SEARCH_ALGORITHMS_
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int *right(int *array, size_t size, int value);
int *left(int *array, size_t size, int value, int *end);

#endif
