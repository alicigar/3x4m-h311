#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strpbrk("hello123", "l"));
	printf("%s\n", strpbrk("hello123", "l"));
}
*/
/*si *s1 es "hello123" y *s2 es "123", si no hay coincidencia devuelve NULL, si la hay
devuelve 1 que es la primera coincidencia */
