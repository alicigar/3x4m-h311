/*#include <stdio.h>*/
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%lu\n", ft_strcspn("hello123", "0123456789"));
	printf("%lu\n", strcspn("hello123", "0123456789"));
}*/

/*ejemplo: si *s es "hello123" y *reject es "0123456789", devuelve (i) que es 5.
Cuenta los caracteres de *s que no aparecen en *reject, hasta que haya coincidencia.
Si no hay coincidencias, recorre *s y cuenta lo que mide.*/
