#include "main.h"
/**
 * print_int - prints int
 * @args: int argument
 * Description: prints int
 * Return: integer
 */
int print_int(va_list args)
{
	int val;
	unsigned int abs, i, length;
	unsigned int count = 1;

	length = 0;

	val = va_arg(args, int);

	if (val < 0)
	{
		length = length + _write('-');
		abs = val * -1;
	}
	else
		abs = val;
	i = abs;
	while (i > 9)
	{
		i = i / 10;
		count = count * 10;
	}
	while (count >= 1)
	{
		length += _write(((abs / count) % 10) + '0');
		count = count / 10;
	}
	return (length);
}

