/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 16:41:47 by ahossein      #+#    #+#                 */
/*   Updated: 2026/09/30 16:51:01 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
// int main(void)
// {
// 	{
// 	printf("my function: %d\n", ft_isascii(0));
// 	printf("original function: %d\n", isascii(0));
// 	return (0);
// }
// }