#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	*array;
	int	size;
	
	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = malloc(size * sizeof(int));
	
	if (start < end)
	{
		while (start <= end)
		{
			array[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = start;
			i++;
			start--;
		}
	}
	return (array);
}
