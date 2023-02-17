#include <stdio.h>

/**
 * main - printing lower and uppercase
 * Return: 0 always
 */
int main(void)
{
	int cases;

	for (cases = 'a'; cases <= 'z'; cases++)
		putchar(cases);
	for (cases = "A"; cases <= 'Z'; cases++)
		putchar(cases);
	putchar('\n');
	return (0);
}
