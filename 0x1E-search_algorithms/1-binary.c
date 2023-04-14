#include "search_algos.h"
/**
  * binary_search - searches for a value in an array of integers using binary
  * search.
  * @array: pointer to first element of array to search
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located or -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, last_ab, ab = 0;
	int m;

	if (array == NULL)
		return (-1);

	last_ab = size - 1;

	while (ab <= last_ab)
	{
		printf("Searching in array: ");

		for (i = ab; i <= last_ab; i++)
		{
			printf("%d", array[i]);
			if (i != last_ab)
				printf(", ");
			else
				printf("\n");
		}
		m = (ab + last_ab) / 2;

		if (array[m] < value)
			ab = m + 1;
		else if (array[m] > value)
			last_ab = m - 1;
		else
			return (m);
	}
	return (-1);
}
