/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:59:34 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/21 13:59:34 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/* #include <stdio.h>

int main (void)
{
	char c1 = '\0';

	printf("'%c' is printable?, '%d'", c1, ft_isprint(c1));
} */