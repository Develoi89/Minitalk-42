/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:03:18 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/19 19:52:16 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	lenboth;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (lendest < size)
		lenboth = lendest + lensrc;
	else if (size == 0)
		return (lensrc);
	else
		return (size + lensrc);
	ft_strlcpy(dest + lendest, src, size - lendest);
	return (lenboth);
}
