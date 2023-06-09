#include "main.h"

int printf_string(va_list args, int display)
{
	int i = display;
	char *buff;

	buff = va_arg(args, char*);
	if (!buff)
		return (0);
	while (buff[i])
	{
		_putchar(buff[i]);
		i++;
	}
	return (i);
}
