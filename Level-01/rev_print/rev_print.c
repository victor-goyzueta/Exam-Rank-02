/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:44:09 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/10 20:27:26 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i)
	{
		i--;
		write(1, &str[i], 1);
	}
	write (1, "\n", 1);
	return (str);
}
