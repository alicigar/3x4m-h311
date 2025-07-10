#include <stdlib.h>

char	**ft_split(char *str)
{
	char **split = malloc (sizeof(char *) * 10000);
	int	i = 0;
	int	j = 0;

	while (*str)
	{
		split[i] = malloc (sizeof(char) * 10000);
		j = 0;
		while (*str < 33 && *str != '\0')
			str++;
		if (*str == '\0')
			break ;
		while (*str > 33)
		{
			split[i][j] = *str;
			j++;
			str++;
		}
		split[i][j] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}
