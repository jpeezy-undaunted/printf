#include "main.h"

int selector(const char *format, va_list args)
{
	int  i = 0, tmp = 0;

	switch (format[i])
	{
	case 'd':
		tmp = printf_integer(args, 0);
		break;
	default:
		_putchar(format[i]);
		tmp++;
		break;
	}
	return (tmp);
}
