#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               bubble sort algorithm.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
if (!array || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
/* Swap elements if they are in the wrong order */
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
/* Print the current state of the array after each swap */
print_array(array, size);
}
}
}
}
