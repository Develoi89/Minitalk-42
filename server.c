/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:46:17 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/25 20:16:57 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

int	ft_to_dec(char *byte)
{
	int		i;
	int		dec;
	char	c;

	i = 0;
	dec = 128;
	c = 0;
	while (byte[i])
	{
		c += dec * (byte[i] - '0');
		dec /= 2;
		i++;
	}
	write (1, &c, 1);
}

void	ft_to_rec(int bit)
{
	static char	byte[9];
	static int	pos = 0;

	byte[8] = '\0';
	if (bit == SIGUSR1)
		byte[pos] = '0';
	else
		byte[pos] = '1';
	if (pos == 7)
		ft_to_dec(byte);
	pos++;
}

int	main(void)
{
	int	x;

	x = getpid();
	ft_printf("Server started \nPID is: %d\n", x);
	while (1)
	{
		signal(SIGUSR1, ft_to_rec);
		signal(SIGUSR2, ft_to_rec);
		pause();
	}
	return (0);
}
