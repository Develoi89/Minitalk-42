/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:58:16 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/19 17:38:03 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t n)
{
	while (n > 0 && *str != '\0' && *str2 != '\0')
	{
		if (*str == *str2)
		{
			str++;
			str2++;
			n--;
		}
		else
			break ;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)str - *(unsigned char *)str2);
}
