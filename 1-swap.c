#include "main.h"

/*
 *swap_int - swaps the values of a and b
 *@a int
 *@b int
 *
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
