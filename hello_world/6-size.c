#include <stdio.h>
/**
 *  *  * main - Programming is
 *   *   *
 *    *    * Return: Always 0 (Sucess)
 *     *
 */

int main(void)

{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}