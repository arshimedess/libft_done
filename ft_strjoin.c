/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 18:20:05 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:54:47 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*storage;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	storage = malloc(s1_len + s2_len + 1);
	if (storage == NULL)
		return (NULL);
	ft_strlcpy(storage, s1, s1_len + 1);
	ft_strlcpy(storage + s1_len, s2, s2_len + 1);
	return (storage);
}
