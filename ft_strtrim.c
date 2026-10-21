/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arshimedess <arshimedess@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 19:17:42 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/21 14:24:10 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sub;
	size_t	s1_len;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	while (s1_len > i && (ft_strchr(set, s1[s1_len - 1])))
	{
		s1_len--;
	}
	while (i < s1_len && (ft_strchr(set, s1[i])))
	{
		i++;
	}
	sub = ft_substr(s1, i, s1_len - i);
	return (sub);
}
int main(void)
{
	char string[] = "   ebezbe babcde  ";
	char set[] = "bea ";
	printf("trimmed screen is:::%s\n", ft_strtrim(string, set));
	return(0);
}