/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:28:41 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/24 20:03:41 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	if (size != 0)
	{
		while (src[b] != '\0' && b < size - 1)
		{
			dest[b] = src[b];
			b++;
		}
			dest[b] = '\0';
	}
	return (a);
}
