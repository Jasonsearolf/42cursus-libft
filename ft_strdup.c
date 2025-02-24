/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 22:18:30 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/24 01:17:05 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s) + 1;
	dest = (char *)malloc(len);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, len);
	return (dest);
}
/* int main(void)
{
	const char *s = "Pikachu";

	printf("%s\n", ft_strdup(s));
} */