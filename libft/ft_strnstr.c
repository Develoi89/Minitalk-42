/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:59:08 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/24 17:16:08 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (j < ft_strlen((char *)needle))
		{
			if (haystack[i + j] == needle[j])
			j++;
			else
				break ;
		}
		if (j == ft_strlen((char *)needle) && i + j <= len)
			return ((char *)haystack + i);
		else
		i++;
		j = 0;
	}
	return (NULL);
}
