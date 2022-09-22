#include "main.h"


/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use _putchar three times
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n, row, count;

	for (row = 1; row <= 10; ++row)
	{
		for (count = 0; count <= 14; ++count)
		{
			n = count;
		if (count > 9)
		{
			putchar(1 + 48);
			n = count % 10;
		}
	}
	putchar(n + 48);
	}
	_putchar('\n');
}

