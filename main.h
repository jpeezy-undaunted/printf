#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char character);
int printf_char(va_list args, int display);
int printf_string(va_list args, int display);
int printf_integer(va_list args, nt display);
int selector(const char *format, va_list args, int display);
int printf_binary(unsigned int num, int display);
int printf(const char *format, ...);
int_x(unsigned int num, int display, int uppercase);
int printf_octal(unsignerd int num, int display);
int printf_unsigned(unsigned int num, int display);
int printf_reverse(vaq_list args, int display);
int printf_pointer(va_list args, int display);
