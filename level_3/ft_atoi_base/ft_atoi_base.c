int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int neg = 1;
	int digit;

	while (*str < 33)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -neg;
		str++;
	}
	while (*str)
	{
	// Convertir a minúscula (sin modificar el string original)
		if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else
			break ;  // Carácter inválido, terminar conversión
	// Verificar que el dígito es válido para la base
		if (digit >= str_base)
			break ;

		// Acumular el resultado
		result = result * str_base + digit;
		str++;
	}
	return (result * neg);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_atoi_base("42a", 16));
}*/
