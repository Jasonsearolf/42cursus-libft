/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:18:34 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 19:34:41 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p;

	p = ptr;
	while (n--)
	{
		*p = 0;
		p++;
	}
}

/* int	main(void)
{
	char str[] = "Pikachu";
	size_t n = 4;
	ft_bzero(str, n);
	printf("Ahora es %s", str);
	return (0);
} */