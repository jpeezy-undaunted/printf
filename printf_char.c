#include "main.h"

int printf_char(va_list args, int display)
{
	int n, i;

	n = va_arg(args, int);
	i = display;
	i = _putchar(n);
	return (i);
}
