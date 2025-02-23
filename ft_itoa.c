/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:00:21 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/23 22:09:43 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	long	num;
	int		len;

	num = n;
	if (num == 0)
		return (1);
	len = 0;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		int_len;

	num = n;
	int_len = ft_int_len(n);
	str = (char *)malloc(sizeof(char) * (int_len + 1));
	if (!str)
		return (NULL);
	str[int_len--] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[int_len] = ((num % 10) + '0');
		num /= 10;
		int_len--;
	}
	return (str);
}

/* int main(void)
{
	int num = -2147483648;
	char *result;
	result = ft_itoa(num);

	printf("%s\n", result);
	free (result);
	return (0);
} */