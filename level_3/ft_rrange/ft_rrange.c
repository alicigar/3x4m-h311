#include <stdlib.h>

int	*ft_rrange(int start, int end)
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
			array[i] = end;
			i++;
			end--;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = end;
			i++;
			end++;
		}
	}
	return (array);
}

/*#include <stdio.h>

int	main()
{
	int	*arr = ft_rrange(0, -3);
	int	i = 0;

	while (i < 4)
		printf("%d", arr[i++]);
	free(arr);
 	return(0);
}*/
