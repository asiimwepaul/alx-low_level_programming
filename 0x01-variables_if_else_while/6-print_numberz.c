#include <stdio.h>
/**
 * main - print from 0 to 9
 * Return: return 0 if successful
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
