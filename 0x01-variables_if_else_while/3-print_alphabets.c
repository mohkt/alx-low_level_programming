#include<stdio.h>
/**
 * main- program that print lowercase alphabets followed by upper case
 * characters
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for  (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
return (0);
}
