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
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		else if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		write (1, &s[i], 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}
