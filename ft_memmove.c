/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:17:17 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/23 22:20:47 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	//Implementar manejo de error
	unsigned char *buffer;
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	buffer = (unsigned char *)dest;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (s[i] != '\0')
	{
		buffer[i] = s[i];
		i++;
	}

	i = 0;
	while(n--)
	{
		d[i] = buffer[i];
		i++;
	}

	return (dest);
}

int	main(void)
{
	char src[] = "Ho";
	char dest[] = "Pikechu";
	size_t n = 3;

	//char dest[5];
	
	printf ("%s Ahora es %s\n",
			src, (unsigned char *)ft_memmove(dest, src, n));
	
	printf ("%s Ahora es %s",
			src, (unsigned char *)memmove(dest, src, n));

	return (0);
}