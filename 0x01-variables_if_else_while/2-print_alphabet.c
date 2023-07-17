#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet in lowercase
 * Return: 0 if succesful
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
	}
	return (0);
}
