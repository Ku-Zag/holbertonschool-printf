#include "main.h"
/**
 * _printf - our printf function
 * @format: input char
 * Description: string specifier
 * Return: number of char in _printf
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);

	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's'
				&& format[i + 1] != '%')
				{
					j += _write(format[i]);
					j += _write(format[i + 1]);
					i++;
				}
				else
				{
					f = get_func(&format[i + 1]);
					j += f(args);
					i++;
				}
			}
		}
		else
		{
			_write(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
