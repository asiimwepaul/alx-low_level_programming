#include <stdio.h>

/**
 * main - adds one line to this code
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;

	p = &n;
	/*
	 * write your line of code here
	 */
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
