{#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> asign a random number to the variable n ea h time is executed
and print the last digit of the number stored in the variable n
* Return: Always 0 (success)
*/
int main(viod)
{
int n;

srand(time(0));
m = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf('%d is zero\n", n);
if (n < 0)
	printf("%d is negative\n", n);
}
return (0);
}
