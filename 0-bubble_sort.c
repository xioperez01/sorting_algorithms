#include "sort.h"

/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 *@array: Array of integers
 *@size: Size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp = 0, verify;

	if (array == NULL || size < 2)
		return;

	while (size)
	{
		verify = 0;

		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				verify = 1;
			}
		}

		if (verify == 0)
			break;
	}

}
