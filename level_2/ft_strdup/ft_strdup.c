/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar <alicigar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:09:11 by alicigar          #+#    #+#             */
/*   Updated: 2025/04/07 21:09:19 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	char	*dup;
	int	i;
	
	i = 0;
	dup = malloc (ft_strlen(src) + 1);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "coconut";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}*/
