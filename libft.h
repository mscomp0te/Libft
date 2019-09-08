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

int		ft_ischar(char c);
int		ft_isspace(char c);
int		ft_islower(char c);
int		ft_isupper(char c);
//size_t	ft_strnlen(const char *s, size_t maxlen);

int		ft_isdigit(int c);
void	*ft_realloc(void *ptr, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_striter(char *s, void (*f)(char *));
size_t	ft_strlen(const char *s);
char	*ft_strmap(char const *s, char (*f)(char));
int		ft_atoi(const char *str);

#endif
