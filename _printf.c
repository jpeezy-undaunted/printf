#include "main.h"
/**
 * _printf -Inbuilt printf to be implemented
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...);
{
	int display = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			display = selector(format, args, display);
			format++;
		}
		else
		{
			_putchar(*format);
			display++;
			format++;
		}
	}
	va_end(args);
	return (display);
}
