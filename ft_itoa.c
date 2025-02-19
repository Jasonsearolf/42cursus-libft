/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:00:21 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/19 15:00:21 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int i;
	size_t len;
	char *result;
	const unsigned char* str;

	i = 0;
	str = (const unsigned char*)n;
	len = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * (len + 1));
	while (str != '\0')
	{
		result[i] = str[i];
		i++;
	}
	return (result);

}

int main(void)
{
	int num = 1234;
	char * result;
	result = ft_itoa(num);

	printf("%s", result);
	return (0);
}