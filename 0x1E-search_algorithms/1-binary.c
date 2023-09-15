#include "search_algos.h"

/**
 * binary_search - Search an array with binary algorithm
 * @array: The pointer to the search array
 * @size: The size of the array
 * @value: The value to search for
 * Return: Return index of search value
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int i, mid;
	
	if (array != NULL)
	{
		while (low <= high)
		{
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("\n");
			mid = (high + low) / 2;
			if (array[mid] == value)
			{
				return (mid);
			}
			else if (array[mid] < value)
			{
				low = mid + 1;
			}	
			else if (array[mid] > value)
			{
				high = mid - 1;
			}
		}
	}
	return (-1);
}
