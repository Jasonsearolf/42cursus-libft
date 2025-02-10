/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:43:28 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/09 22:39:31 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{

	}
}

int main(void)
{
	const char str[] = "-123";

	printf("%d", ft_atoi(str));
	return (0);
}