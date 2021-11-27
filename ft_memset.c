/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:43:20 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/23 23:23:54 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*s;

	s = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char ) c;
		i++;
	}
	b = (void *) s;
	return (b);
}
