/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:55:11 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/18 22:57:09 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	tokens_counter(const char *s, char delim)
{
	int tokens;
	int in_token;

	tokens = 0;
	in_token = 0;
	while (*s)
	{
		if (*s != delim && in_token == 0)
		{
			in_token = 1;
			tokens++;
		}
		else if (*s == delim)
		{
			in_token = 0;
		}
		s++;
	}
	return (tokens);
}
static char *token_copy(const char* s, int start, int end)
{
	int len;
	int i;
	char *token;

	len = end - start;
	token = (char *)malloc(sizeof(char) * (len + 1));
	if (!token)
		return (NULL);
	i = 0;
	while (i < len)
	{
		token[i] = s[start + i];
		i++;
	}
	token[i] = '\0';
	return (token);
}

char **ft_split(const char *s, char c)
{
	char** result;
	int total_tokens;
	int i;
	int j;
	int arr_index;
	int start_index;

	if (!s)
	{
		result = (char**)malloc(sizeof(char *));
		if(!result)
			return (NULL);
		result[0] = NULL;
		return (result);
	}
	total_tokens = tokens_counter(s, c);
	result = (char**)malloc(sizeof(char *) * (total_tokens + 1));
	if (!result)
		return (NULL);
	i = 0;
	arr_index = 0;
	while (s[i])
	{	
		while (s[i] == c && s[i])
		{
			i++;
		}
		if (s[i] != c)
		{
			start_index = i;
			while (s[i] != c && s[i])
				i++;
			result[arr_index] = token_copy(s, start_index, i);
			if (!result[arr_index])
			{
				j = 0;
				while (j < arr_index)
				{
					free(result[j]);
				}
				free(result);
				return (NULL);
			}
			arr_index++;
		}
	}
	result[arr_index] = NULL;
	return (result);
}

int main(void)
{
	int i = 0;
    char **result;
    char *str = " Hola   xxxx,   pikachu aprende  ft_split ";
    char delim = ' ';

    result = ft_split(str, delim);
    if (!result)
        return (1);

    // Imprimimos cada palabra resultante en una línea
    while (result[i])
    {
        printf("Token [%d]: \"%s\"\n", i, result[i]);
        free(result[i]);  // Liberamos cada token
		i++;
    }
    free(result);         // Liberamos el array de punteros

    return (0);
}