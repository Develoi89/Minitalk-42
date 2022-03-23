/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:20:37 by ealonso-          #+#    #+#             */
/*   Updated: 2022/02/22 18:07:53 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	s1_len;
	size_t	s2_len;
	int		aux1;
	int		aux2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	aux1 = 0;
	aux2 = 0;
	new_s = malloc(s1_len + s2_len + 1);
	if (!s1 || !s2 || !new_s)
		return (NULL);
	while (s1[aux1])
	{
		new_s[aux1] = s1[aux1];
		aux1++;
	}
	while (s2[aux2])
	{
		new_s[aux1++] = s2[aux2++];
	}
	new_s[aux1] = '\0';
	return (new_s);
}
