/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:43:57 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 11:44:04 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
		i++;
	j = 0;
	while (i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i--;
		j++;
	}	
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s", argv[1]);
		printf ("%s", ft_strrev(argv[1));
	}
	return (0);
}
