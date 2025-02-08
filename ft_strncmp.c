/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:28:24 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/07 22:05:35 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char*s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

int main(void)
{
	const char s1[] = "Ho";
	const char s2[] = "Holita";
	size_t n = 4;

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);

}