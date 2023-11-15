#include "shell.h"
/**
 * _puterror - writes error
 * @c: The str to print
 *
 * Return: On success 1.
 */
int _puterror(char *c, int n)
{
	return (write(STDERR_FILENO, c, n));
}
