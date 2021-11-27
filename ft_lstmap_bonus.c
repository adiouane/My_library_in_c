/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:30:56 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/25 00:14:25 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *f(void *str)
{
	str = "@";
	return(str);
}
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*lstfinal;

	if (!lst || !f)
		return (NULL);
	lstfinal = NULL;
	while (lst)
	{
		lstnew = ft_lstnew(f(lst->content));
		if (!lstnew)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&lstfinal, lstnew);
		lst = lst->next;
	}
	return (lstfinal);
}

int main(void)
{
	t_list	*head;
	t_list	*head2;
	
	head = NULL;
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("amine")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("marrakcech")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("1337")));
	head2 = ft_lstmap(head, &f, NULL);
	while (head2)
	{
		printf("%s\n", head2->content);
		head2 = head2->next;
	}	
}