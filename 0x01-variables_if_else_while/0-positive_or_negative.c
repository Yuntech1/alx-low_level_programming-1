/*this program checks if n is positive, zero or negative*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block 
 * Description: get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
