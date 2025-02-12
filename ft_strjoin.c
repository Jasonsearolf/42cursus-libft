/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:45:26 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/12 22:08:36 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	total;
	size_t	i;
	size_t	j;
	char	*result;

	total = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (total + 1));
	if(!result)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

// REVISAR CASOS DE NULL 

int main(void)
{
	char s1[] = "Pika";
	char s2[] = "chu";
	char *result = ft_strjoin(s1, s2);

	printf("%s", result);
	free(result);
	return (0);
}
