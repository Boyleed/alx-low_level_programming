#include "main.h"
/**
 * _isalpha – function that checks for alphabetic charater
 * @c: is the input letter
 * return: 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	
	return (1);
	
	else
	
	return (0);
}
