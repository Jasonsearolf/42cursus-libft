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

/* size_t ft_strlcpy(char *dst, const char *src, size_t n)
{

	return (dst);
} */

int main(void)
{
	char src[] = "Pikachu";
	char dst[4];

	/* ft_strlcpy (dst, src, 4);
	printf ("Destino: %s\n", dst);
	printf ("Longitud: %zu"); */

	strlcpy(dst, src, 4);
	int result = strlcpy (dst, src, 4);
	printf ("Destino: %s\n", dst); 
	printf ("Longitud: %d", result);
	return (0);
}