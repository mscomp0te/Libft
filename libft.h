/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 04:54:45 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/05 05:13:51 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN 2147483648
# define LONG_MAX 9223372036854775807 
# define LONG_MIN 9223372036854775808

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/* Expansions */
//int		ft_ischar(char c);
int		ft_isspace(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
void	*ft_realloc(void *ptr, size_t size);
//size_t	ft_strnlen(const char *s, size_t maxlen);

/* Part 1 */
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
void	*ft_memchr(const void *s, int c, size_t n);

/* Part 2 */
void	ft_putchar_fd(char c, int fd);
void	ft_striter(char *s, void (*f)(char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Bonus part */
t_list	*ft_lstnew(void const *content, size_t content_size);

#endif