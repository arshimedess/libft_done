/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/08 17:26:32 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/21 10:33:23 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		lil_len;

	if (*little == '\0')
		return ((char *)big);
	lil_len = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i + lil_len <= len)
	{
		if (ft_strncmp((char *)big + i, little, lil_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char str1[] = "wat wha w whatever";
// 	char str2[] = "what";
// 	printf("result of mine::::::%s\n", ft_strnstr(str1, str2, 14));
// 	printf("result as it should:%s\n", strnstr(str1, str2, 14));
// 	return (0);
// }