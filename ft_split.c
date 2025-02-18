/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:55:11 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/18 00:07:26 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	tokens_counter(const char *s, char delim)
{
	int tokens;
	int in_word;

	tokens = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != delim && in_word == 0)
		{
			in_word = 1;
			tokens++;
		}
		else if (*s == delim)
		{
			in_word = 0;
		}
		s++;
	}
}
static int token_copy(const char* s, int start, int end)
{
	int len;
	int i;
	char *token;

	len = end - start;
	token = (char *)malloc(sizeof(char) * (len + 1));
	if (!token)
		return (NULL);
	while (i < len)
	{
		token[i] = s[start + i];
		i++;
	}
	token[i] = '\0';
	return (token);
}

char **ft_split(const char *s, char *c)
{
	char** result;
	int total_tokens;
	int i;
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
	

}

/* int main(void)
{
	int i = 0;
    char **split_result;
    char *cadena = " Hola   mundo,   esto es  ft_split ";
    char delimitador = ' ';

    split_result = ft_split(cadena, delimitador);
    if (!split_result)
        return 1;

    // Imprimimos cada palabra resultante en una línea
    while (split_result[i] != NULL)
    {
        printf("Palabra %d: \"%s\"\n", i, split_result[i]);
        free(split_result[i]);  // Liberamos cada palabra
		i++;
    }
    free(split_result);         // Liberamos el array de punteros

    return 0;
} */