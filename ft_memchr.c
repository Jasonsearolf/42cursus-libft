/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:11:20 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 19:41:10 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		uc;
	size_t				i;

	str = (const unsigned char *)s;
	uc = (unsigned char) c;
	i = 0;
	while (n--)
	{
		if (str[i] == uc)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	const void *s = "Hola";
	int c = 'l';
	size_t n = 4;

	printf("%p",ft_memchr(s, c, n));
	return (0);

} */