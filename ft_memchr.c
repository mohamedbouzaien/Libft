/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:43:09 by mbouzaie          #+#    #+#             */
/*   Updated: 2019/01/15 19:25:47 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	mychar;
	unsigned char	*str;

	i = 0;
	mychar = c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == mychar)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
