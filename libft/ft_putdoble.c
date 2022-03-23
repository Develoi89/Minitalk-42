/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdoble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:25:32 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/23 16:04:26 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putdoble(int i)
{
	char	*nb;
	int		len;

	nb = ft_itoa(i);
	len = ft_putstr(nb);
	free (nb);
	return (len);
}
