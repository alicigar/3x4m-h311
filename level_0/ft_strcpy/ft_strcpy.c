/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:34:30 by alicigar          #+#    #+#             */
/*   Updated: 2025/04/07 21:05:55 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[50];
	char *s2 = "Hello";
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));
	return(0);
}
*/
