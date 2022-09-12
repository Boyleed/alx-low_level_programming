#include <stdio.h>
/**
 ** main - Prints all possible combinations of single-digit numbers.
 ** Description - 'Main Function'
 ** Return: Always 0.
 **/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
