/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:01:43 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 19:55:03 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c )
{
	unsigned char	uc;
	size_t			len;

	uc = (unsigned char) c;
	len = ft_strlen (str);
	if (uc == '\0')
	{
		return ((char *)&str[len]);
	}
	while (len > 0)
	{
		len--;
		if ((unsigned char)str[len] == uc)
		{
			return ((char *)&str[len]);
		}
	}
	return (NULL);
}

/* int main(void)
{
	int c = 'u';
	const char *str = "Hola Mundo";

	char *result = ft_strrchr(str, c);
	printf ("%ld\n", result - str);
	if (result == NULL)
	{
		printf ("Caracter '%c' no encontrado. Retorna NULL.\n", c);
	}
	else
	{
		printf ("Encontrado. El puntero apunta a: %s\n", result);
	}
} */