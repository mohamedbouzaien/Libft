/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:39:39 by mbouzaie          #+#    #+#             */
/*   Updated: 2019/01/04 23:04:54 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1 != NULL && *(unsigned char *)s1 == *(unsigned char *)s2 && i < n)
	{
		s1 = s1 + 1;
		s2 = s2 + 1;
		i++;
	}
	if (n == 0 || i == n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
