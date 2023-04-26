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
	int len = 0;
	int temp = num;
	int digit;

	if (num < 0)
		display += _putchar('-');

	do {
		len++;
		temp /= 10;
	} while (temp != 0);

	while (len > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < len; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		if (num < 0)
			display += _putchar(-digit + '0');
		else
			display += _putchar(digit + '0');
		num -= digit * pow10;
		len--;
	}
	return (display);
}
