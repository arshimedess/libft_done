/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/13 20:35:15 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:58:01 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		num;
	long	tmp;

	tmp = n;
	if (tmp < 0)
	{
		write(fd, "-", 1);
		tmp = tmp * -1;
	}
	if (tmp >= 0 && tmp <= 9)
	{
		num = tmp + '0';
		write(fd, &num, 1);
	}
	else
	{
		ft_putnbr_fd(tmp / 10, fd);
		ft_putnbr_fd(tmp % 10, fd);
	}
}
