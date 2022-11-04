#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int s10 = 0;
	int s11 - 0;

	while (*(dest + s10) != '\0')
	{
		sa++;
	}
	
	while (s11 >= 0)
	{
		*(dest + s10) = *(src + s11);
		if (*(src + s11) == '\0')
			break;
		s10++;
		s11++;
	}
	return (dest);
}
