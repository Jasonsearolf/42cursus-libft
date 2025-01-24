/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:52:26 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/24 18:05:13 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = n;
	if(d > s && d < s + n)
	{
		while (n--)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}


int main(void)
{
	char src[] = "HOLAS";
	char dest[] = "Pikachu";

	ft_memmove(dest + 2, src, 15);
	printf ("dest ft es = %s\n", dest);

	memmove(dest + 2, src, 15);
	printf ("dest origin es = %s", dest);
	return (0);
}