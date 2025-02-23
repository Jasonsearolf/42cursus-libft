/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:50:55 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/23 22:15:43 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
		ft_putnbr_fd(num, fd);
	}
	else if (num > 9)
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putchar_fd((num % 10) + 48, fd);
	}
	else
	{
		ft_putchar_fd((num + 48), fd);
	}
}

/* int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
} */