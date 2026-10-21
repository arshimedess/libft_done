/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/01 15:08:23 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:56:36 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	return (c);
}
/* int main(void)
{
	printf("my function ascii dec: %d\n", ft_tolower('A'));
	printf("my function: %c\n", ft_tolower('A'));
	printf("original function ascii dec: %d\n", tolower('A'));
	printf("original function: %c\n", tolower('A'));
	return (0);
} */