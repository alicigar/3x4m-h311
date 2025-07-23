/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:31:12 by alicigar          #+#    #+#             */
/*   Updated: 2025/04/09 00:00:17 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int n = 0;
	int	neg = 1;

	while (*str < 33)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -neg;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * neg);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main (void)
{
	char *str = "-487";
 	printf ("%i\n", atoi(str));
	printf ("%i\n", ft_atoi(str));
	return (0);
}
*/
