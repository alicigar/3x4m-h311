/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:04:36 by alicigar          #+#    #+#             */
/*   Updated: 2025/03/24 19:12:13 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	do_op(char *num1, char *op, char *num2)
{
	int	a = atoi(num1);
	int	b = atoi(num2);
	int	r = 0;

	if (*op == '+')
		r = a + b;
	else if (*op == '-')
		r = a - b;
	else if (*op == '*')
		r = a * b;
	else if (*op == '/')
		r = a / b;
	else if (*op == '%')
		r = a % b;
	printf("%d\n", r);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return(0);
}
