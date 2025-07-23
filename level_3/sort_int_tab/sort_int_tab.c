void	sort_int_tab(int *tab, unsigned int size)
{
	int tmp;
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int tab[] = {9, 4, 6, 2};
	unsigned int size = 4;
	int	sort = 0;
	
	sort_int_tab(tab, size);
	
	while (sort < size)
	{
		printf("%i\n", tab[sort]);
		sort++;
	}
}*/
