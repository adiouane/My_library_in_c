/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:52:00 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/25 18:01:03 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc(count * size);
	if (p != NULL)
	{
		ft_bzero(p, count * size);
		return (p);
	}
	return (NULL);
}

int main()
{
	int i;
	char *ptr;

	i = 0;
	ptr = ft_calloc(2, sizeof(int));
	while (i < sizeof(int))
	{
		printf("%d\n", ptr[i]);
		i++;
	}
}
