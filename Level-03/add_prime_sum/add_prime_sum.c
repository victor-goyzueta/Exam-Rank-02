/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:23:40 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 23:42:01 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_mini_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str == "4294967295")
		return (4294967295);
	while (str[i])
	{
		result = result * 10 + '0';
	}
	return (result)
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		//
	}
	write(1, "0\n", 2);
	return (0);
}
