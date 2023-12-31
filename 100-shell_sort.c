#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: first integer to swap.
 * @b: second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sorts array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, x, y;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (x = gap; x < size; x++)
		{
			y = x;
			while (y >= gap && array[y - gap] > array[y])
			{
				swap_ints(array + y, array + (y - gap));
				y -= gap;
			}
		}
		print_array(array, size);
	}
}
