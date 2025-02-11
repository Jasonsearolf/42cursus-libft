/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:18:35 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/11 22:12:43 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t total;
	void *ptr;
	//Revisar si se puede usar SIZE_MAX porque está en otra libreria.
	/* if (count != 0 && size > SIZE_MAX / count)
	{
		return (NULL);
	} */

	total = count * size;
	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	ft_memset(ptr, 0, total);

	return ptr;
}

int main(void)
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
}