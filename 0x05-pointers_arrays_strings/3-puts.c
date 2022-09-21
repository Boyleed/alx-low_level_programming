#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * 0n success: returns 0
 */
void _puts(char *str)
{
	while (*str[i] != '\0')
	{
		_putchar(*str[i]);
		i++;
	}
	
	_putchar('\n');
}
