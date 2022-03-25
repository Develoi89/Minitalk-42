/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:44:39 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/25 18:34:43 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	ft_send_it(int pid, char *str)
{
	int		i;
	int		j;
	char	c;

	i = 7;
	j = 0;
	while (str[j])
	{
		c = str[j];
		while (i >= 0)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			--i;
			usleep(150);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*bin;

	pid = ft_atoi(argv[1]);
	if (ft_isdigit(pid) == 1)
		ft_printf("invalid PID");
	if (argc != 3)
		ft_printf("the number of arguments is invalid.");
	ft_send_it(pid, argv[2]);
}
