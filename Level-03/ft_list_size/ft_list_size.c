/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 09:57:04 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 10:06:07 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
