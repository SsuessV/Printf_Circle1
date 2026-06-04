/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 03:05:50 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/04 17:06:43 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned int n)
{
	const char	*base;
	int			len;

	base = "0123456789ABCDEF";
	len = 0;
	if (n >= 16)
		len += convert_to_hex(n / 16);
	len += write (1, &base[n % 16], 1);
	return (len);
}
