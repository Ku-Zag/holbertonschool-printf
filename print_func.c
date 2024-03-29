#include "main.h"
/**
 * print_char -print chr
 * Description:prints chr
 * Return:chr
 * @args:argument
*/
int print_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}

/**
 * print_str -prints str
 * Descripton:prints str
 * Return:str
 * @args:arguments
 */

int print_str(va_list args)
{
	int i = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_write(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_fs -prints "%"
 * Description:prints "%"
 * Return:"%"
 * @args:arguments
 */
int print_fs(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
