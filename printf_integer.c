#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @display: the printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list args, int display)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		display += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		display += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (display);
