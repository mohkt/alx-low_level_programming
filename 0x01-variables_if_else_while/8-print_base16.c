#include<stdio.h>
/**
 * main - program that output hex numbers
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 25; x++)
		putchar("%x", x);
	putchar('\n');
	return (0);
}
