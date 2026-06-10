/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 03:05:50 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/10 19:33:51 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned int n)
{
	const char	*base;
	int			len;
	int			tmp;

	base = "0123456789ABCDEF";
	len = 0;
	if (n >= 16)
	{
		tmp = ft_hexa_upper(n / 16);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (write(1, &base[n % 16], 1) == -1)
		return (-1);
	len += 1;
	return (len);
}
