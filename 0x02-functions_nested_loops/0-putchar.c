#include "main.h"

/**
<<<<<<< HEAD
 *  main - data entry point
 *  return: always return 0 (success)
 **/
=======
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
>>>>>>> f6bb60227490de47d948b231125f427cc9e3292b
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
