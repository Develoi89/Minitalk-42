/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:44:39 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/23 19:26:05 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*to_binary(char *str)
{
	int		i;
	char	digit;
	char	*temp;
	char	*res;

	digit = 1;
	i = 0;
	res = ft_strdup("");
	while (str[i] != '\0')
	{
		digit = str[i];
		while (digit > 0)
		{
			temp[0] = digit % 2;
			temp[1] = '\0';
			res = ft_strjoin(res, temp);
			digit /= 2;
		}
		temp = ft_strdup("");
		i++;
	}
	ft_printf("prueba:%s", res);
	return (res);
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
	bin = to_binary(argv[2]);
}
