#include <stdio.h>
/**
 ** main - Prints all the numbers of base 16 in lowercase
 ** Return: Always 0.
 **/
int main(void)
{
	int b1 = 0, b2;

	while (b1 <= 99)
	{
		b2 = b1;
		while (b2 <= 99)
		{
			if (b2 != b1)
			{
				putchar((b1 / 10) + 48);
				putchar((b1 % 10) + 48);
				putchar(' ');
				putchar((b2 / 10) + 48);
				putchar((b2 % 10) + 48);
			if (b1 != 98 || b2 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++b2;
	}
	++b1;
	}
	putchar('\n');
	return (0);
}
