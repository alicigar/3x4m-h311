int	*ft_range(int start, int end)
{
	int i = 0;
	int size = (end - start + 1);
	int *nums = (int *) malloc(size * sizeof(int));
	//if (!nums)
	//	return (NULL);
	//podemos omitir estas dos ultimas lineas
	while (start <= end)
	{
		nums[i] = start;
		i++;
		start++;
	}
	return (nums);
}

/*#include <stdio.h>

int	main()
{
	int	*arr = ft_rrange(0, 4);
	int	size = 0;

	while (size < 5)
	{
		printf("%i ", arr[size]);
		size++;
	}
	free(arr);
}*/
