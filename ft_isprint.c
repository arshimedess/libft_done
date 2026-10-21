/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 16:54:54 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/20 17:16:03 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}
// int main(void)
// {
// 	{
// 	printf("my function: %d\n", ft_isprint('{'));
// 	printf("original function: %d\n", isprint('{'));
// 	return (0);
// }
// }