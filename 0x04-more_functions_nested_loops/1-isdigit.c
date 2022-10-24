#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * print_numbers - Print numbers between 0 to 9 incl.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		{
	_putchar(i);
		}
	_putchar('\n');
=======
/**
 * _isdigit - Check for a digit (0-9)
 * @i: Integer holding the character
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int i)
{
		if (i >= 48 && i <= 57)
		return (1);
		return (0);
>>>>>>> 69398906b908d77b1be7f3a76cac1bfeee2d141b
}
