#include <stdio.h>
/**
 *  *  * main - Programming is
 *   *   *
 *    *    * Return: Always 0 (Sucess)
 *     *
 */
int main(void)

{
char a;
int b;
long int c;
long long d;
float e;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
