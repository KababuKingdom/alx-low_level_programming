#include "search_algos.h"
/**
  * linear_search - searches for a value in an array of integers using linear
  * search.
  * @array: pointer to first element of array to search
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located or -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t ab = 0;

	while (ab < size)
	{
		printf("Value checked array[%lu] = [%d]\n", ab, array[ab]);
		if (array[ab] == value)
			return (ab);
		ab++;
	}

	return (-1);
}
