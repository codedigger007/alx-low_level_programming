#include <stdio.h>
/**
 * main - A  printing the various computer types through a functioin
 * Return 0 (FakeValue)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
