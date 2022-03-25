/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:44:39 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/25 21:41:57 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	ft_enviar(int pid, char c)
{
	int i;
	int bit;
	i = 7;
	while (i >= 0)
	{
		bit = (c >> i) & 1;
		if (bit == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		--i;
		usleep(150);
	}
}

void message_char(int pid, char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		ft_enviar(pid, str[i]);
		i++;
	}
}

int main (int argc, char **argv){
	int pid;
	if (argc < 3)
		ft_putstr("PIDERROR");
	if (argc > 3)
		ft_putstr("ARGERROR");
	pid = ft_atoi(argv[1]);
	message_char(pid, argv[2]);
	return (0);

}