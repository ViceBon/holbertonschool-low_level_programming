#include<stdlib.h>
#include <time.h>
#include <stdio.h>
/*Random number to */

/*betty stile*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is cero\n", n);

	return (0);
}
