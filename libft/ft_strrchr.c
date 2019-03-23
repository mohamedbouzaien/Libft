/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 16:46:53 by mbouzaie          #+#    #+#             */
/*   Updated: 2018/12/09 17:21:11 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while ((i >= 0) && (s[i] != (char)c))
	{
		i--;
	}
	if (((char)c == '\0' && s[i] == '\0') || (s[i] == (char)c))
		return ((char *)&s[i]);
	return (NULL);
}
