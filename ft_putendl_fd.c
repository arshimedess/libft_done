/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/13 20:28:47 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/13 20:34:25 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
// "\n" is an string which means it gives the address!
// if we write '\n' it is just a char value, with no address

//   s[i]     the char itself, like 'h'    ✗ not an address
//   &s[i]    where that char lives        ✓
//   "\n"     where a newline lives        ✓