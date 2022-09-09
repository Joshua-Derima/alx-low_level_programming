#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d\n", n "is positive");
	else if (n == 0)
	printf("%d\n", n "is zero");
	else
	printf("%d\n", n "is negative");
	return (0);
}
