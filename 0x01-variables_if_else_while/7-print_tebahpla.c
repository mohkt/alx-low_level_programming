#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - program to print alphabet in reverse order
 * lowercase
 * Return: 0 Sucess
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
