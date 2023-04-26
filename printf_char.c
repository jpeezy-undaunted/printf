#include "main.h"

int printf_char(va_list args, int display)
{
	int n, i = 0;

	n = va_arg(args, int);
	i = _putchar(n);
	return (i);
}
