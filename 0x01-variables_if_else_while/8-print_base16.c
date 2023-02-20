#include<stdio.h>
/**
 * main - program that output hex numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
