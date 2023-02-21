#include "main.h"
#include <unistd.h>
/**
 * _putchar - replacing printf
 * Return: 1 0r -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
