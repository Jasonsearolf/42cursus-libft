/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:38:43 by jeflores          #+#    #+#             */
/*   Updated: 2025/01/20 21:13:31 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	c1 = '2';

	printf ("'%c' es un digito? %d \n", c1, ft_isdigit(c1));
	return (0);
} */