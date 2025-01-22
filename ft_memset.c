/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:33:28 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/22 21:16:44 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;

	p = ptr;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (ptr);
}

/* 
#include <string.h>
int main (void)
{
	char str[] = "Hola";
	int c = 'x';
	size_t n = 2;

	printf("%s ahora es %s \n",str, (unsigned char *)ft_memset(str, c, n));
	printf("%s ahora es %s",str, (unsigned char *)memset(str, c, n));


	return (0);
} */