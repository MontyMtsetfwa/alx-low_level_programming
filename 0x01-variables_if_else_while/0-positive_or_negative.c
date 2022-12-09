#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for random number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my code goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("% is negative\n", n);
	return (0);
}
