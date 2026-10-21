/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/01 14:55:54 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:56:48 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	return (c);
}
/* int main(void)
{
	printf("my function ascii dec: %d\n", ft_toupper('a'));
	printf("my function: %c\n", ft_toupper('a'));
	printf("original function ascii dec: %d\n", toupper('a'));
	printf("original function: %c\n", toupper('a'));
	return (0);
} */