#include <unistd.h>
#include "main.h"
/**
 * _write - write function
 * @c:char
 * Description: string
 * Return: int
 */
int _write(char c)
{
	return (write(1, &c, 1));
}

