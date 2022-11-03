#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int sa = 0;
	int sb - 0;

	while (*(dest + sa) != '\0')
	{
		sa++;
	}
	
	while (sb >= 0)
	{
		*(dest + sa) = *(src + sb);
		if (*(src + sb) == '\0')
			break;
		sa++;
		sb++;
	}
	return (dest);
}
