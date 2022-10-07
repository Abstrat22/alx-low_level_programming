/*
 * Author: Francis Ofori Anane
 * Date: 7/10/2022
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using
 * malloc
 *
 * @b: The size of bytes to allocate.
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
