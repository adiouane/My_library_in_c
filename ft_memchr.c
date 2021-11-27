/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:39:31 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/23 18:25:18 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;
	size_t			i;

	str = (unsigned char *) s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
