/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:18:35 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/23 22:18:59 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	if (count != 0 && total / count != size)
	{
		return (NULL);
	}
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total);
	return (ptr);
}

/* int main(void)
{
	size_t n = 5;
	int *arr = ft_calloc(n, sizeof(int));
	size_t i = 0;

	while (i < n)
	{
		printf ("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}

	free(arr);

	return (0);
} */