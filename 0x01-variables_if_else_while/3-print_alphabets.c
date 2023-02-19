#include<stdio.h>
/**
 * main- program that print lowercase alphabets followed by upper case
 * characters
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	for  (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
return (0);
}
