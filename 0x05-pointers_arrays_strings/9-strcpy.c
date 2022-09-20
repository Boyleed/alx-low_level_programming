/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 *
 * return : 0
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{	*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
