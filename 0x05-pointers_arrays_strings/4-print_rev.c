#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * *@s: string to reverse
 * return: 0
 */
void print_rev(char *s)
{
	int i;
	
	for (n = 0; s[n] != '\0'; n++)
	{	for (--n; n >= 0; --n)
		{	_putchar(s[n]);
		}

	}
	_putchar('\n');
}
