#include "shell.h"
/**
 * _putout - writes
 * @c: The str to print
 * @n: numbre
 * Return: On success 1.
 */
int _putout(char *c, int n)
{
	return (write(STDOUT_FILENO, c, n));
}
