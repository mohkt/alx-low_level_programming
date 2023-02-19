#include<stdio.h>
/**
 * main - program that will print alphabet in lower case
 * but skip e and q
 * Return: 0 (sucess)
 */
int main(void)
{
	char e = 'e';
	char q = 'q';
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
			putchar(ch);
		putchar('\n');
	}
return (0);
}
