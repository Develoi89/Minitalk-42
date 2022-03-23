/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:27:21 by ealonso-          #+#    #+#             */
/*   Updated: 2022/01/31 17:36:14 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_cleanerror(char	**res, int str)
{
	while (str--)
		free(res[str]);
	free(res);
	return (NULL);
}

char	**ft_putword(char **res, const char *s, char c, int words)
{
	int		i;
	int		str;
	size_t	count;

	i = 0;
	str = 0;
	while (str < words)
	{	
		if (s[i] != c)
		{
			count = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				count++;
			}
			res[str] = malloc((count + 1) * sizeof(char));
			if (!res[str])
				return (ft_cleanerror(res, str));
			ft_strlcpy(res[str], &s[i - count], count + 1);
			str++;
		}
		i++;
	}
	return (res);
}

int	ft_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**res;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ft_putword(res, s, c, words);
	res[words] = 0;
	return (res);
}
