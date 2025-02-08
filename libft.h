/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:47:56 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/08 21:39:20 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <string.h> // ELIMINAR

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void 	*ft_memset(void *ptr, int c, size_t n);
void	ft_bzero(void *ptr, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *s, int c );
char *ft_strrchr(const char *str, int c );
int ft_strncmp(const char *s1, const char*s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);


#endif