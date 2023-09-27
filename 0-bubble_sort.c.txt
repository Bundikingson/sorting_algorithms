#include "sort.h"

/**
 * swap_ints - SWAP TWO INT in an array..
 * @a: The 1ST INT to swap.
 * @b: The 2ND INT to swap.
 */

void swap_ints(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - SORT AN ARRAY OF INTS in ascending order..
 * @array: An ARRAY OF INTS to sort..
 * @size: The SIZE OF ARRAY..
 *
 * DESCRIPTION: PRINTS THE ARRAY after each swap..
 */

void bubble_sort(int *array, size_t size)

{
	size_t h, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (h = 0; h < len - 1; h++)
		{
			if (array[h] > array[h + 1])
			{
				swap_ints(array + h, array + h + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}