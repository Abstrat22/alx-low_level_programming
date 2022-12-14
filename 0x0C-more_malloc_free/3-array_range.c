/*
 * Author: Francis Ofori Anane
 * Date: 10/10/2022
 */

#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates an array of integers
  * The array created should
  * contain all the values from @min(included)
  * to @max (included), ordered from @min
  * to @max
  *
  * @min: The minimum value of the array.
  * @max: The maximum value of the array.
  *
  * Return: the pointer to the newly
  * created array, or NULL if @min > @max.
  */

int *array_range(int min, int max)
{
	int i = 0, len = 0, *array;
	int l_digit = min;

	if (min > max)
		return (NULL);

	while (l_digit <= max)
	{
		++len;
		++l_digit;
	}

	array = malloc(sizeof(int) * len);
	if (array == NULL)

		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}

	return (array);
}
