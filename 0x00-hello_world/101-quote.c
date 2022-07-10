#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(str);
	/* Starting main */
	fwrite(str, len, 1, stderr);
	return (1);
}
