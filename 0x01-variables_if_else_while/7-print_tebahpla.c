#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
