#include <stdio.h>

/**
 * main- lowercase alphabet
 * Return: 0 always
 */
int main(void)
{
	char cases = 'a';

	while (cases <= 'z')
	{
		if (cases != 'e' && cases != 'q')
			putchar(cases);
		cases++;
	}
	putchar('\n');
	return (0);
}
