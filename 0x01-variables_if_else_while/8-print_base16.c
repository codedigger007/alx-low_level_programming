#include <stdio.h>
/**
 * main - base 16
 * Return: always 0
 */
int main(void)
{
	int num;
	int hex;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
