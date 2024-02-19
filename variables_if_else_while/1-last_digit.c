#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main - print  ist nuber of the variable
 *
 *
 *Return: Always 0.
 */

int main(void)
{
	int n;
	int ld = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ld > 5)
		printf("and is grater than 5\n");
	else if (ld < 6)
		pirintf("and is less than 6 and not 0\n");
	else
		printf("and is 0");
	return (0);
}
