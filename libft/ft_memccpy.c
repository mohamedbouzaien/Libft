/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:36:10 by mbouzaie          #+#    #+#             */
/*   Updated: 2019/01/04 20:56:54 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	mychar;

	i = 0;
	mychar = c;
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst = dst + 1;
		if (*(unsigned char *)src == mychar)
			return (dst);
		src = src + 1;
		i++;
	}
	return (NULL);
}
