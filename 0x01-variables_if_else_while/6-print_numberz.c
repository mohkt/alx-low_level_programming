#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - program Write a program that prints all single digit
 *  numbers of base 10 starting from 0
 *  Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
