#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * *@s: string to reverse
 * return: 0
 */
void print_rev(char *s)
{
	int len = stlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
