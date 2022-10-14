#include <stdio.h>
/**
 * main - print different combinations of two digits
 * Return: return 0 if successful
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/*Prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*Prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*Adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
