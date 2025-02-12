/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:34:34 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 19:46:49 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen (src);
	dstlen = ft_strlen (dst);
	i = 0;
	if (n <= dstlen)
	{
		return (n + srclen);
	}
	while (i < (n - dstlen - 1) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/* int main(void)
{
	char src[] = "chu";
	char dst[] = "Pika";

	int result = (unsigned int) ft_strlcat (dst, src, 20);
	printf ("Destino: %s\n", dst);
	printf ("Longitud: %d", result); 

	return (0);
} */