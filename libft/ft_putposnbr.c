/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putposnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:53:44 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/23 16:05:35 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putposnbr(unsigned int i)
{
	int	len;

	len = 0;
	if (i > 9)
	{
		len += ft_putposnbr(i / 10);
		len += ft_putposnbr(i % 10);
	}
	else
		len += ft_putchar(i + 48);
	return (len);
}
