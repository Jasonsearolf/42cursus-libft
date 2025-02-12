/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:12:56 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 19:52:19 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len
			&& haystack[i + j] == needle[j]
			&& needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	const char haystack[] = "Hola, Mund Mundo Feliz";
	const char needle[] = "Mundo";
	size_t len = 18;

	printf("%s", ft_strnstr(haystack, needle, len));
	return (0);

} */