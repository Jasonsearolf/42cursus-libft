/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:34:05 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/22 21:12:05 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/* 
#include <stdio.h>

int main(void)
{
	char c1 = 'ñ';
	
	printf("'%c' es caracter ascii? %d \n", c1, ft_isascii(c1));
	
	return(0);
} */