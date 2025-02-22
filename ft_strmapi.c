/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:33:50 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/21 22:04:11 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char *dest;
	size_t str_len;
	size_t i;

	if (!f)
		return (NULL);
	str_len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	char	ft_test(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (char)ft_toupper(c);
	else
		return (char)ft_tolower(c);
}

int	main(void)
{
	char str[] = "Pikachu";
	char *result = ft_strmapi(str, ft_test);
	printf("MAPI: %s\n", result);
	free (result);
	return (0);
}