#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t ab;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (ab = left; ab < right; ab++)
			printf("%d, ", array[ab]);
		printf("%d\n", array[ab]);

		ab = left + (right - left) / 2;
		if (array[ab] == value)
			return (ab);
		if (array[i] > value)
			right = ab - 1;
		else
			left = ab + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t ab = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (ab = 1; ab < size && array[i] <= value; ab = ab * 2)
			printf("Value checked array[%ld] = [%d]\n", ab, array[ab]);
	}

	right = ab < size ? ab : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", ab / 2, right);
	return (_binary_search(array, ab / 2, right, value));
}
