/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeflores <jeflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:55:11 by jeflores          #+#    #+#             */
/*   Updated: 2025/02/24 14:26:00 by jeflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	tokens_counter(const char *s, char delim)
{
	int	tokens;
	int	in_token;

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

static	char	*extract_token(const char **s, char c)
{
	size_t	token_len;
	char	*token;

	while (**s == c)
		(*s)++;
	if (!**s)
		return (NULL);
	if (!ft_strchr(*s, c))
		token_len = ft_strlen(*s);
	else
		token_len = ft_strchr(*s, c) - *s;
	token = ft_substr(*s, 0, token_len);
	*s += token_len;
	return (token);
}

static	void	ft_free_all(int arr_index, char **arr_tokens)
{
	int	j;

	j = 0;
	while (j < arr_index)
	{
		free(arr_tokens[j]);
		j++;
	}
	free(arr_tokens);
}

char	**ft_split(const char *s, char c)
{
	char	**arr_tokens;
	int		total_tokens;
	int		i;

	if (!s)
		return (NULL);
	total_tokens = tokens_counter(s, c);
	arr_tokens = (char **)malloc(sizeof(char *) * (total_tokens + 1));
	if (!arr_tokens)
		return (NULL);
	i = 0;
	while (i < total_tokens)
	{
		arr_tokens[i] = extract_token(&s, c);
		if (!arr_tokens[i])
		{
			ft_free_all(i, arr_tokens);
			return (NULL);
		}
		i++;
	}
	arr_tokens[i] = NULL;
	return (arr_tokens);
}

/* int main(void)
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
} */