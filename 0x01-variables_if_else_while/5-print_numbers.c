#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - program that prints all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
		return (0);
}
