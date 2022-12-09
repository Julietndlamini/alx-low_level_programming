#include <srdl lb.h>
#include <time.h>
#include <stdio.h>
/**
 * main - 1
 *
 * Return: 0
 */
Int main(void)
{

	srand(time(0));
	n = rand() - RAND - MAX / 2;
	if (n > 0)
		printf("%d is positive\n" /, n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	Return(0);
}

