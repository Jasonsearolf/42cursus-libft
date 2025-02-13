/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:14:45 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/13 21:20:56 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	while (s1[i] == set[i])
	{
		start++;
		i++;
	}

	i = 0;
	end = ft_strlen(s1);
	while (s1[end - i] == set[i])
	{
		i++;
	}

	

}

int main(void)
{
	const char s1[] = "!!!Pikachu!!!";
	const char set[] = "!";
	char *result = ft_strtrim(s1, set);

	printf("%s\n", result);
	free (result);
	return (0);
}