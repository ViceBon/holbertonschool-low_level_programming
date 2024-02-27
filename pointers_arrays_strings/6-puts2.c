#include "main.h"

/**
 *puts2 - read the numbers there and print the even numbers
 *followed by a new line
 * @s: string to print de chars from
 *
 */

void puts2(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len; i += 2)
	{
	_putchar(s[i]);
	}

	_putchar('\n');
}
