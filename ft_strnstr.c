/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:11:55 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/23 18:29:47 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	h;
	unsigned int	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[h] && len > h)
	{
		if (haystack[h] == needle[0])
		{
			n = 0;
			while (haystack[h + n] == needle[n] && (h + n) < len)
			{
				if (needle [n + 1] == '\0')
					return ((char *)&haystack[h]);
				n++;
			}
		}
		h++;
	}
	return (0);
}
