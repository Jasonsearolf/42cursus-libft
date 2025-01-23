/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:21:27 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/23 15:21:27 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned const char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		
		i++;
	}
	
	return (dest);
}

int	main(void)
{
	char src[] = "Hola";
	char dest[] = "Pika";
	size_t n = 4;
	
	printf ("%s Ahora es %s\n", src, (unsigned char *)ft_memcpy(dest, src, n));
	
	printf ("%s Ahora es %s", src, (unsigned char *)memcpy(dest, src, n));

	return (0);
}
