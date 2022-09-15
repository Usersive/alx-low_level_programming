#include "holberton.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	_putchar("%c: %d\n", c, _isupper(c));
	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));
	return (0);
}
