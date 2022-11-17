#include <stdlib.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array to interate through.
 * @size: size of the array.
 * @action: the fuction to execute array and size on.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}


