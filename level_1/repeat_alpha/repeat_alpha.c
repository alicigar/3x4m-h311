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

void	repeat_alpha(char *str)
{
	int repeat = 0;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			repeat = *s - 64;
		else if (*str >= 'a' && *str <= 'z')
			repeat = *s - 96;
		else
			repeat = 1;
		while (repeat > 0)
		{
			write(1, str, 1);
			repeat--;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
}
