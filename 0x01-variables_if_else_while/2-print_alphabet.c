#include<stdio.h>
/**
 * main - programme that will print alphabet in lowercase
 * Return: 0 sucess
 */
int main(void)

{
	char al[26] = "abcdefghijklmnopqrstuvwxyz";
	int y;

	for (y = 0; y < 26; y++)
	{
		putchar(al[y]);
	}
	putchar('\n');
	return (0);
}
