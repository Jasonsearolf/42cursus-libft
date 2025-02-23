/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:52:26 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/24 00:54:43 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s)
		return (dest);
	i = n;
	if (d > s && d < s + n)
	{
		while (n--)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}

/* #include <string.h>
int main(void)
{
	char src[] = "HOLAS";
	char dest[] = "Pikachu";

	ft_memmove(dest + 2, src, 2);
	printf ("dest ft es = %s\n", dest);

	ft_memmove(dest + 2, src, 2);
	printf ("dest origin es = %s", dest);
	return (0);
} */