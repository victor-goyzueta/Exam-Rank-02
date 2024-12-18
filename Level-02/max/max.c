/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:10:51 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 16:42:50 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	result;
	
	i = 0;
	if (!tab)
		return (0);
	result = tab[i];
	while (i != len)
	{
		if (tab[i] <= tab[i + 1])
			result = tab[i + 1];
		i++;
	}
	return (result);
}
