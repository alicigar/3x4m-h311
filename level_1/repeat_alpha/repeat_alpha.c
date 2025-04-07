/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:42:01 by alicigar          #+#    #+#             */
/*   Updated: 2025/04/07 23:30:53 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *s)
{
	int num;
	int	i;

	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			num = *s - 64;
		else if (*s >= 'a' && *s <= 'z')
			num = *s - 96;
		else
			num = 1;
		i = 0;
		while (num > i)
		{
			write(1, s, 1);
			i++;
		}
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
}
