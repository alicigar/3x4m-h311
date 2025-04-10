/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:11:26 by alicigar          #+#    #+#             */
/*   Updated: 2025/04/08 23:26:23 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = *s + 32;
		else if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		write (1, s, 1);
		s++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}
