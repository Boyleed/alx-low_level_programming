/**
 * swap_int - swaps two integers' value
 * @a: input 1
 * @b: input 2
 * return : 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
