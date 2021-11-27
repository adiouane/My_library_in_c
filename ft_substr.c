/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:43:55 by adiouane          #+#    #+#             */
/*   Updated: 2021/11/23 18:30:09 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;
	size_t			start_copy;
	size_t			i;

	if (!s)
		return (NULL);
	start_copy = start;
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	if (s_len - start < len)
		len = s_len - start;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (NULL);
	i = 0;
	while (i < len && start_copy < s_len)
	{
		sub[i] = s[start_copy + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
