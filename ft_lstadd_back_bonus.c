/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 03:02:45 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/23 18:23:56 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if ((lst == NULL) || (new == NULL))
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
		last = last -> next;
	last->next = new;
}
