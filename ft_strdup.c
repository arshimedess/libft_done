/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 14:29:44 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:54:37 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// strdup = measure + malloc + copy
// string duplicate

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	dup_len;

	dup_len = ft_strlen(s);
	dup = malloc(dup_len + 1);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, dup_len + 1);
	return (dup);
}
