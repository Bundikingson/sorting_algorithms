#include "sort.h"

/**
 * swap_ints - SWAP TWO INTS in an AARAY..
 * @a: The 1ST INT to swap..
 * @b: The 2ND INT to swap..
 */

void swap_ints(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - SORT AN AARY OF INTS in ascending order
 *                  using the selection sort algorithm..
 * @array: An ARRAY OF INTS..
 * @size: The SIZE OF THE AARAY..
 *
 * DESCRIPTION: PRINTS THE AARAY after each swap..
 */

void selection_sort(int *array, size_t size)

{
	int *min;
	size_t R, j;

	if (array == NULL || size < 2)
		return;

	for (R = 0; R < size - 1; R++)
	{
		min = array + R;
		for (j = R + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + R) != min)
		{
			swap_ints(array + R, min);
			print_array(array, size);
		}
	}
}