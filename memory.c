#include "shell.h"

/**
 * bfree - free a pointers or NULLs the address
 * @ptr: address pointers to_free
 *
 * Return: 1 if_free, other_wise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
