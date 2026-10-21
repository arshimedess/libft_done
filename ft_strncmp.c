/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/08 16:32:40 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/20 18:24:31 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int main(void)
// {
// 	char str1[] = "what";
// 	char str2[] = "whatever";
// 	printf("result of mine::::::%d\n", ft_strncmp(str1, str2, 9));
// 	printf("result as it should:%d\n", strncmp(str1, str2, 9));
// 	return (0);
// }