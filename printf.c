#include "main.h"

/**
 * _printf - produces output according to format
 * @format: formats to which arguments are printed
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		format++;
	}
	return (count);
}
