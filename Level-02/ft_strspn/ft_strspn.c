/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:15:06 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 14:56:01 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	b;
	int		i;
	int		j;

	if (!s || !accept)
		return (0);
	i = 0;
	b = 0;
	while(s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (!accept[j])
			return (b);
		b++;
		i++;
	}
	return (b);
}

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%zu", ft_strspn(argv[1], argv[2]));
	}
	return (0);
}
