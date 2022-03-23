/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpost.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:34:38 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/23 16:07:11 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printpost(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr > 15)
	{
		len += ft_printpost(ptr / 16);
		len += ft_printpost(ptr % 16);
	}
	else if (ptr > 9)
		len += ft_putchar(ptr + 87);
	else
		len += ft_putchar(ptr + 48);
	return (len);
}

int	ft_putpost(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += ft_printf("0x");
	if (ptr == 0)
	{
		write(1, "0", 1);
		len++;
	}
	else
		len += ft_printpost(ptr);
	return (len);
}
