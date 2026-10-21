/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/12 17:43:55 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:57:35 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	free_all(char **p, size_t j_sofar)
{
	size_t	k;

	k = 0;
	while (k < j_sofar)
	{
		free(p[k]);
		k++;
	}
	free(p);
}

char	**ft_split(char const *s, char c)
{
	char	**pointers_array;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	pointers_array = malloc((count_words (s, c) + 1) * sizeof(char *));
	if (pointers_array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			pointers_array[j] = ft_substr(s, i, word_len(s + i, c));
			if (pointers_array[j] == NULL)
				return (free_all(pointers_array, j), NULL);
			j++;
			i = i + word_len(s + i, c);
		}
	}
	return (pointers_array[j] = NULL, pointers_array);
}
// int main(void)
// {
// 	char **words = ft_split(" hello hell from earth ha ha",' ');
// 	int k = 0;
// 	while (words[k] != NULL)
// 	{
// 		printf("%s\n", words[k]);
// 		k++;
// 	}	
// 	return(0);
// }