#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort array of integers in order of algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints array for each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t t, j;

	if (array == NULL || size < 2)
		return;

	for (t = 0; t < size - 1; t++)
	{
		min = array + t;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + t) != min)
		{
			swap_ints(array + t, min);
			print_array(array, size);
		}
	}
}
