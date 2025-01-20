/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:43:37 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/20 20:34:34 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	char c1 = '2';
	
	printf("'%c' es una letra? %d \n", c1, ft_isalpha(c1));
	
	return(0);
} */