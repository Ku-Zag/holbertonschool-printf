#include "main.h"
/**
 * get_func - it picks up which function to go
 * @format: an input char
 * Description: format
 * Return: pointer to func
 */
int (*get_func(const char *format))(va_list)
{
	int i = 0;
	func_t list[] = {
		{"%", print_fs},
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	while(list[i].t)
	{
		if (*(list[i].t) == *format)
			return (list[i].f);
		i++;
	}
	return (NULL);
}
