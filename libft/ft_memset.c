/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:25:47 by mbouzaie          #+#    #+#             */
/*   Updated: 2019/01/10 19:46:11 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*p;
	unsigned char	mychar;

	mychar = (unsigned char)c;
	p = (char *)b;
	i = 0;
	while ((size_t)i < len)
	{
		p[i] = mychar;
		i++;
	}
	return (b);
}
