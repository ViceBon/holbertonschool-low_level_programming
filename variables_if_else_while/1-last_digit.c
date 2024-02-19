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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("and is grater than 5\n");
	else if (n % 10 < 6)
		ptintf("and is less than 6 and not 0\n");
	else
		printf("and is 0");
	return (0);
}
