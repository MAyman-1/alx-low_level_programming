#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry
 * Return: 0 if succesful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is %s\n", n, "is negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "is positive");
	}
	else
	{
		printf("%d is %s\n", n, "is zero");
	}
	return (0);
}
