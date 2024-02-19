#include<stdlib.h>
include <time.h>
/*Random number to 0*/

/*betty stile*/
int main (void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
		printf("%d is positive\n", n);}
	else if (n<0){
		printf("%d is negative\n", n);}
	else (n=0){
		printf("%d is cero\n", n);}

	return (0);	
}
