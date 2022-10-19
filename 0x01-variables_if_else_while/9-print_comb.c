#include <stdio.h>
/**
 * main - program entry point.
 * Return: 0 success, non zero error.
 */
int main(void)
{
	int a;

	for (a = '0'; a < 10; a++)
	{
		putchar(a);
		if (a == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
