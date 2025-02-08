/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:39:24 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/08 22:11:08 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t i;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	while(i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}

	return (0);
}

int main(void)
{
	const void *s1 = "Hola";
	const void *s2 = "Holita";
	size_t n = 4;

	printf("%d", ft_memcmp(s1, s2, n));
	return (0);
}