/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:46:17 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/24 17:58:23 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	ft_to_dec(int bit)
{
	static char	byte[8];
	static int	pos;

	pos = 0;
	byte[7] = '\0';
	byte[pos++] = bit;
	ft_printf("%d", byte[pos]);
}

int	main(void)
{
	int	x;

	x = getpid();
	ft_printf("Server started \nPID is: %d\n", x);
	while (1)
	{
		signal(SIGUSR1, ft_to_dec);
		signal(SIGUSR2, ft_to_dec);
		pause();
	}
}
