/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:55:14 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 21:45:10 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char *sub;

	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if(sub == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

//Revisar casos de desbordamiento de LEN o ajustar LEN

int main(void)
{
	const char *s = "Pikachu";
	int start = 2;
	size_t len = 5;
	char *result = ft_substr(s, start, len);

	if (!result)
	{
		printf("Es null");
	}
	else
	{
		printf("%s", result);
	}
	free(result);
	return (0);
}