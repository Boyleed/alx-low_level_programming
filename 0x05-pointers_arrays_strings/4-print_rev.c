#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * *@s: string to reverse
 * return: 0
 */
void print_rev(char *s)
{
	int i;
	int j;
	
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
