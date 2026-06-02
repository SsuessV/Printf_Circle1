/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:46:07 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/02 12:46:13 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_unsigned_d(unsigned int n)
{
	if (n > 9)
		ft_unsigned_d(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int ft_len(unsigned int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int ft_print_unsignedint(unsigned int n)
{
	ft_unsigned_d(n);
	return (ft_len(n));
}