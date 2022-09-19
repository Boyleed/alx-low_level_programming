#include "main.h"
/**
 * _islower – function to check lowercase char
 *
 * @c:  is the int used in the argument of the function
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
	return (0);
}
