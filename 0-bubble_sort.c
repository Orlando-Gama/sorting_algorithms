#include "sort.h"

/**
 * swap_ints - Swapping two integers in array.
 * @a: First integer to swap.
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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: array of integers to sort.
 * @size: size of the array.
 *
 * Description: this Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
