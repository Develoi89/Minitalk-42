/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:03:13 by ealonso-          #+#    #+#             */
/*   Updated: 2022/03/23 16:08:12 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int		ft_putuphex(unsigned int i);
int		ft_putstr(char	*s);
int		ft_putpost(unsigned long long ptr);
int		ft_putposnbr(unsigned int i);
int		ft_puthex(unsigned int i);
int		ft_putdoble(int i);
int		ft_putchar(int c);
int		ft_printf(const char *input, ...);
int		ft_toupper(int c);
char	*ft_itoa(int x);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_tolower(int c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t x);
int		ft_strncmp(const char *str, const char *str2, size_t n);
int		ft_isdigit(int x);
int		ft_isalpha(int x);
int		ft_isalnum(int x);
int		ft_isascii(int x);
int		ft_isprint(int x);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *ptr, const void *ptr2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_bzero(void *ptr, size_t n);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif /* LIB_H */
