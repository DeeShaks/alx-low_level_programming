#include <stdio.h>
/**
 * main - prints natural numbers below 0124 that are multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
int j, k;
for (j = 1; j < 1024; j++)
{
if ((j % 3) == 0 || (j % 5) == 0)
k += j;
}
printf("%d\n", k);
return (0);
}
