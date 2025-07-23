int max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int	max_value = tab[0];
	unsigned int	i = 0;

	while (i < len)
	{
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return (max_value);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int s[] = {2, 7, 3, 9, 5};
	printf("%d\n", max(s, 5));
}*/
