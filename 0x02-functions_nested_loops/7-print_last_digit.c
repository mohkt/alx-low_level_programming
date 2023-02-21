#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int pldigt;

	pldigt = (n % 10);

	if (pldigt < 0)
	{
		pldigt = (-1 * pldigt);
	}

	_putchar(pldigt + '0');
	return (pldigt);
}
