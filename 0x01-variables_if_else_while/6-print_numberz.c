#include <stdio.h>

/**
 * main - display all numbers from 0 to 9 using putchar
 * Return: return 0 and exit the program.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
