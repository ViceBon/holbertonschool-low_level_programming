#include "main.h"

/**
 *puts2 - read the numbers there and print the even numbers
 *followed by a new line
 * @str: string to print de chars from
 *
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len; i += 2)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
