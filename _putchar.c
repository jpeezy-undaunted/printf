#include "main.h"
/**
 * _putchar - Prints character
 * @character: the character to be printed
 * Return: 1, success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character));
}
