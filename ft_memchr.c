/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:43:09 by mbouzaie          #+#    #+#             */
/*   Updated: 2019/01/04 22:50:57 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	mychar;

	i = 0;
	mychar = c;
	while (i < n && s && *(unsigned char *)s != mychar)
	{
		i++;
		s = s + 1;
	}
	if (*(unsigned char *)s == mychar && i < n)
		return ((void *)s);
	return (NULL);
}
