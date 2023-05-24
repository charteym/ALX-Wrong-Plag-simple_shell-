#include "shell.h"

/**
 * bfree - this helps to free a pointer and NULLs the address
 * @ptr: this points to the address of the node
 * Return: 1 if freed success ,if not 0.
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
