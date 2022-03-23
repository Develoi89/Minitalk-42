/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:41:30 by ealonso-          #+#    #+#             */
/*   Updated: 2022/02/01 16:55:05 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ftt_intlen(int x)
{
	int	count;
	int	aux;

	aux = x;
	count = 1;
	if (x <= -2147483648)
		return (12);
	else if (x == 0)
		return (2);
	while (aux != 0)
	{
		aux = aux / 10;
		count++;
	}
	if (x < 0)
		count++;
	return (count);
}

void	ftt_putstr(char *res, int x, size_t y)
{
	if (x != 0)
	{
		res[y - 2] = (x % 10) + '0';
		ftt_putstr(res, x / 10, y - 1);
	}
}

char	*ft_itoa(int x)
{
	char	*res;

	res = malloc(ftt_intlen(x) * sizeof(char));
	if (!res)
		return (NULL);
	res[ftt_intlen(x) - 1] = '\0';
	if (x == 0)
		res[0] = 0 + '0';
	else if (x == -2147483648)
		ft_strlcpy(res, "-2147483648", 12);
	else if (x < 0)
	{
		res[0] = '-';
		ftt_putstr(res, (x * -1), ftt_intlen(x));
	}
	else
		ftt_putstr(res, x, ftt_intlen(x));
	return (res);
}
