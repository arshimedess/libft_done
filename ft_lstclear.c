/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/19 14:04:52 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 14:28:07 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next_node = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = next_node;
	}
	*lst = NULL;
}
// while is important to be tmp != NULL cuz
// if we go with tmp.next != NULL we won't free and del
// the last node cuz it has a NULL next.