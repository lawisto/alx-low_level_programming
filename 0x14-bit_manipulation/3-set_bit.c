#include "main.h"
/**
*set_bit - sets the value of a bit to 1 at a given index.
*
*@n: pointer to integer
*@index: index to change
*
*Return: 1 (success) else -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64 || n == 0)
		return (-1);

	*n = *n | ((1 << index));

	return (1);
}
