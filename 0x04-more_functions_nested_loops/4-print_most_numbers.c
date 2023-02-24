#include "main.h"

/**
 * print _most_numbers - prints the numbers, from 0 to 9
 * Do not print 2 and 4
 * Return: no return.
 */

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			putchar(i);
	}
	putchar('\n');
}
