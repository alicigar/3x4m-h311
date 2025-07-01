#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				break;
			j++;
		}
		if (!accept[j])
			return(i);
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%lu\n", ft_strspn("12345abc", "helo"));
	printf("%lu\n", strspn("1234567890", "helo"));
}*/
/*Ejemplo: si *s es "hello123" y *accept "helo", devuelve (i) que es "5"
Osea, recorrer y cuenta *s hasta el caracter que aparece en accept*
*/
