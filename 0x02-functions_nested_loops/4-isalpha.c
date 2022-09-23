#include <unistd.h>
#include "main.h"

/**
 * _isalpha – _isalpha - checks whether the passed character is an alphabet (A-Z or a-z)
 * @c: The character to check
 * return: 1 if c is an alphabet, otherwise Return: 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	return (1);
	else
	return (0);
}
