/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:23:12 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 14:10:16 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	b;
	size_t	i;
	size_t	j;
	
	b = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j] && s[i] == reject[j])
		{
			j++;
			i++;
		}
		if (!reject[j])
			return (b);
		b++;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%zu", ft_strcspn(argv[1], argv[2]));
	}
	return (0);
}
