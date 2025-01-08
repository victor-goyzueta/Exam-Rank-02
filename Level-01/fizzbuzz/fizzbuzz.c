/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:33 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 09:42:28 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar (s[i]);
		i++;
	}
	ft_putchar ('\n');
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

int	main()
{
	int	n;
	n = 1;

	while (n <= 100)
	{
		if (((n % 3) == 0) && (n % 5) == 0)
		{
			ft_putstr("fizzbuzz");
			n++;
		}
		else if ((n % 3) == 0)
		{
			ft_putstr("fizz");
			n++;
		}
		else
		{
			ft_putstr("buzz");
			n++;
		}
		ft_putnbr(n);
		ft_putchar('\n');
		n++;
	}
}
