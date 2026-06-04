/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:54:05 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/04 16:37:54 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_to_hex(uintptr_t n)
{
	const char	*base;
	int			len;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += convert_to_hex(n / 16);
	len += write (1, &base[n % 16], 1);
	return (len);
}

int	ft_print_ptr(void *ptr)
{
	uintptr_t	pointer;
	int			len;

	pointer = (uintptr_t)ptr;
	len = 0;
	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	len = convert_to_hex (pointer);
	return (2 + len);
}
