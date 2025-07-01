#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*range;
	int	len;
	int	i;
	
	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	range = malloc (len * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (i < len)
		{
			range[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			range[i] = start - i;
			i++;
		}
	}
	return (range);
}


/*#include <stdio.h>

int *ft_range(int start, int end);  // Prototipo de tu función

int main(void)
{
    int *arr = ft_range(1, 3);  // Ejemplo con (1, 3)
    int i = 0;
    
    // Imprime los valores (sabemos que para (1,3) son 3 elementos)
    while (i < 3)
        printf("%d ", arr[i++]);
    
    free(arr);
    return 0;
}*/
