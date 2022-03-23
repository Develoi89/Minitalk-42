/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:13:17 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/10 13:29:49 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	int	alpha;
	int	digit;

	digit = ft_isdigit(x);
	alpha = ft_isalpha(x);
	if (digit == 1 || alpha == 1)
		return (1);
	else
		return (0);
}
