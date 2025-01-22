/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:33:28 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/22 20:57:28 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int c, size_t n)
{
	unsigned char *p;
	
	p = ptr;

	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (ptr);
}

int main (void)
{
	char str[] = "Hola";
	int c = 'x';
	size_t n = 2;

	printf("%s ahora es", (unsigned char *)ft_memset(str, c, n));

	return (0);
}