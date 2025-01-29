/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:31:16 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/24 19:55:45 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t srclen;

	if (!src)
	{
		return (0);
	}

	srclen = ft_strlen(src);

	
	if (n == 0)
	{
		return (srclen);
	}

	i = 0;
	while (i < (n-1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}

	dst[i] = '\0';

	return (srclen);
}

int main(void)
{
	char src[] = "Pikachu";
	char dst[5];

	int result = (unsigned int) ft_strlcpy (dst, src, 5);
	printf ("Destino: %s\n", dst);
	printf ("Longitud: %d", result); 

	return (0);
}