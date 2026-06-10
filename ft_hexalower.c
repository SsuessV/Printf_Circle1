/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:05:02 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/10 19:27:12 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned int n)
{
	const char	*base;
	int			len;
	int			tmp;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		tmp = ft_hexa_lower(n / 16);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (write(1, &base[n % 16], 1) == -1)
		return (-1);
	len += 1;
	return (len);
}
