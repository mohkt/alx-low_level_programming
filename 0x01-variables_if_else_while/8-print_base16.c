#include<stdio.h>
/**
 * main - program that output hex numbers
 * Return: 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z' ; x++)
		putchar("%x", x);
	putchar('\n');
	return (0);
}
