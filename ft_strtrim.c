/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <mbouzaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 15:37:25 by mbouzaie          #+#    #+#             */
/*   Updated: 2020/01/11 20:07:49 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_strlen(s);
	while (len > 0 && ft_strchr(set, s[len - 1]) != NULL)
		len--;
	i = -1;
	while (len > 0 && ft_strchr(set, s[++i]) != NULL)
		len--;
	if (!(str = ft_strnew(len)))
		return (NULL);
	j = -1;
	while (++j < len)
	{
		str[j] = s[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
