#include "main.h"

/**
 * print_newline - print a new line
 * @ap_list: pointer to the variable argument
 * Return: count of integer
 */
int print_newline(va_list ap_list)
{
	UNUSED(ap_list);
	return (write(1, "\n", 1));
}

/**
 * print_percent - print a new line
 * @ap_list: pointer to the variable argument
 * Return: count of integer
 */
int print_percent(va_list ap_list)
{
	UNUSED(ap_list);
	return (write(1, "%%", 1));
}

/**
 * print_space - print a new line
 * @ap_list: pointer to the variable argument
 * Return: count of integer
 */
int print_space(va_list ap_list)
{
	UNUSED(ap_list);
	return (0);
}
