#include "main.h"

/**
 ** print_square -  prints a square, followed by a new line.
 ** @size: input int
 ** Return: Nothing.
 **/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (i = 0; i < size; i++)

{

	for (j = 0; j < size; j++)

	{

	_putchar('#');

	}

	_putchar('\n');

	}
	}
}
