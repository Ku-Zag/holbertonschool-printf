#include "main.h"

/**
 * print_char-print chr
 * print_str-prints str
 * print_pct-prints "%"
 *
 *@args:argument
 *Return:chr or str or "%"
 */

int print_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}

int print_str(va_list args)
{
	int i = 0;
	char *s = va_arg(args, char *);
	if(s == NULL)
		s = "(null)";
	while (s[i])
	{
		_write(s[i]);
	}
	return (i);
}

int print_fs(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
