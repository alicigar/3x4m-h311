/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar <alicigar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:35:57 by alicigar          #+#    #+#             */
/*   Updated: 2025/03/18 21:36:11 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	while (str[i - 1])
	{
		i--;
		write(1, &str[i], 1);
	}
}

 int	main(int argc, char **argv)
 {
 	if (argc == 2)
 		rev_print(argv[1]);
 	write (1, "\n", 1);
 }
