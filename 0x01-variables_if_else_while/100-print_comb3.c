#include <stdio.h>
/**
 ** main - Prints all possible combinations of single-digit numbers.
 ** Return: Always 0.
 **/
int main(void)
{
	int d;

	for (d = 0; d = 100; d++)
	{
		putchar((d / 10) + '0');

		putchar((num % 10) + '0');

		if (d !=99)
		{	
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
