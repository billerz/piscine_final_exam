/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:42:09 by exam              #+#    #+#             */
/*   Updated: 2021/11/12 13:39:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		index;
	int		count;
	char	swap;

	count = 0;
	while (str[count] != '\0')
		count++;
	count = count - 1;
	index = 0;
	while (index < ((count + 1) / 2))
	{
		swap = str[index];
		str[index] = str[count - index];
		str[count - index] = swap;
		index++;
	}
	return (str);
}
