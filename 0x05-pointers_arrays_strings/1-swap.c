#include "main.h"
/**
 * swap_int - function that swaps the values of two interger
 * @a: this is the first entry
 * @b: this is the second entry
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
