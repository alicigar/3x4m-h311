/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 23:35:12 by alicigar          #+#    #+#             */
/*   Updated: 2025/04/08 00:12:41 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	while (s[i] < 33)
		i--;
	while (s[i] > 33)
		i--;
	i++;
	while (s[i] > 33)
	{
		write (1, &s[i], 1);
		i++;
	}
	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
