#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two integers
 * @a: pointer to first number
 * @b: pointer to the second number
 */
void swap(int *a, int *b)
{

    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

/**
 * bubble_sort - sorts an array of numbers
 * @array: array of numbers to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
size_t i = 0, len = size;
int bubble = 0;
if (array == NULL || size < 2)
return;

while (bubble == 0)
{
bubble = 1;
for (i = 0; i < len - 1; i++)
{
    if(array[i] > array[i + 1])
{
swap(array + i, array + i + 1);
print_array(array, size);
bubble = 0;
}
}
len--;
}
}