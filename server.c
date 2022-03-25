/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:46:17 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/25 19:32:55 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	ft_to_dec(char *byte)
{
	write(1, byte, 8);
}

void	ft_to_rec(int bit)
{
	static char	byte[9];
	static int	pos = 0;

	byte[8] = '\0';
	if (bit == SIGUSR1)
	{
		byte[pos] = '0';
		write(1, "0", 1);
	}
	else
	{
		byte[pos] = '1';
		write(1, "1", 1);
	}
	if (pos == 7)
	{
		ft_to_dec(byte);
	}
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
}
