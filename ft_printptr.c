/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:54:05 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/10 17:25:03 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_to_hex(uintptr_t n)
{
	const char	*base;
	int			len;
	int			ret;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		ret = convert_to_hex(n / 16);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	ret = write (1, &base[n % 16], 1);
	if (ret == -1)
		return (-1);
	len += ret;
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
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	if (write (1, "0x", 2) == -1)
		return (-1);
	len = convert_to_hex (pointer);
	return (2 + len);
}
