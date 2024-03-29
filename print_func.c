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
	int i;
	char *str = va_arg(args, char *);
	if(str == NULL)
		str= "(null)";
	for (i = 0; str[i]; i++)
	{
		_write(str[i]);
	}
	return (i);
}

int print_fs(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
