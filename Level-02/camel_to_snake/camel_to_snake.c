/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:24:59 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 15:34:29 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	is_upper(int c)
{
	if (is_alpha(c))
		if (c >= 'A' && c <= 'Z')
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		//
	return (0);
}
