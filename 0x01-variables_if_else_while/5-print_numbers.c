#include <stdio.h>
#include <stdlib.h>
/**
 * main - return single integer number of base 10
 * Return: return 0 if successfull
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
