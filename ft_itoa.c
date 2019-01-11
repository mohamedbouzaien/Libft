/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 20:27:13 by mbouzaie          #+#    #+#             */
/*   Updated: 2018/12/30 23:34:11 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*ito;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (!(ito = ft_strnew(ft_intlen(n))))
		return (NULL);
	i = ft_intlen(n) - 1;
	ito[i + 1] = '\0';
	if (n < 0)
	{
		ito[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		ito[i] = (n % 10) + 48;
		i--;
		n /= 10;
	}
	return (ito);
}
