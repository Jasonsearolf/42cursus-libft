/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 22:18:30 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/11 22:49:08 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup (const char *s1)
{
	size_t len;
	void *s2;
	char *result;

	len = ft_strlen(s1);
	s2 = malloc(len);

	result = ft_memcpy(s2, s1, len);

	return (result);
}

int main(void)
{
	const char *s1 = "Pikachu";

	printf("%s\n", ft_strdup(s1));
}