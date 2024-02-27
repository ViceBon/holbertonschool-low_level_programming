#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line
 *
 *@str: sting to be printed
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

		while (str[len] != '\0')
		{
			len++;
		}
	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
