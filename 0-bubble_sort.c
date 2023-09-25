#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
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
 * bubble_sort - Sorts the array of integers in ascending order.
 * @array: array of integers to sort.
 * @size: size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t t, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (t = 0; t < len - 1; t++)
		{
			if (array[t] > array[t + 1])
			{
				swap_ints(array + t, array + t + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
