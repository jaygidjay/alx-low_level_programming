#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 from 0 followed by new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
