/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:27:55 by exam              #+#    #+#             */
/*   Updated: 2021/11/12 11:05:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

char	putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
	return (*str);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			putstr("fizzbuzz");
		else if (i % 5 == 0)
			putstr("buzz");
		else if (i % 3 == 0)
			putstr("fizz");
		else
		{
			ft_putnbr(i);
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
