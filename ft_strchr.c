/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:11:28 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/01 01:04:10 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c )
{
	unsigned char uc;
	
	uc = (unsigned char) c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == uc)
		{
			return (char *)s;
		}
		s++;
	}

	if (uc == '\0')
	{
		return (char *)s;
	}
	return NULL;
}

int main(void)
{
	int c = 'h';
	const char *s = "Pikachu";

	char *result = ft_strchr(s, c);
	printf ("%ld", result - s);
}