#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * 0n success: returns 0
 */i
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
