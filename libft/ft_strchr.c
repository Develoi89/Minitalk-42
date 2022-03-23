/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:53:10 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/26 19:47:01 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	r = (char *)s + i;
	if (s[i] != (char)c)
		return (0);
	else
		return (r);
}
