#include "sort.h"

/**
 * swap_ints - SwAp TWO gIVen integers.
 * @a: First Integer.
 * @b: Second Integer.
 */

void swap_ints(int *a,int *b)
{
	int tmp;
	tmp = *a; 
	*a = *b;
	*b = tmp;
}
