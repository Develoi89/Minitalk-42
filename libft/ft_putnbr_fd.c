/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:33:57 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/26 19:00:21 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n == -2147483648)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(214748364, fd);
		write(fd, "8", 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n < 10 && n >= 0)
	{
		i = n + 48;
		write(fd, &i, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		i = n % 10 + 48;
		write(fd, &i, 1);
	}
}
