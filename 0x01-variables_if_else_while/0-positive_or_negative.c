#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - my entry point to my work
 * return - i want it to return success
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

