/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:04:02 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 17:44:22 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	argv1;
	int	argv3;

	if (argc == 4)
	{
		argv1 = atoi(argv[1]);
		argv3 = atoi(argv[3]);
		if (argv[2][0] == '+')
			argv1 += argv3;
		else if (argv[2][0] == '-')
			argv1 -= argv3;
		else if (argv[2][0] == '*')
			argv1 *= argv3;
		else if (argv[2][0] == '/')
			argv1 /= argv3; 
		printf("%i\n", argv1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
