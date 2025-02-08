#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size = (start <= end) ? (end - start + 1) : (start - end + 1);
	int *arr = (int *)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
		arr[i] = (start <= end) ? (end - i) : (end + i);
	return (arr);
}
