/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:46:07 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/02 22:44:30 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_unsign(unsigned int n)
{
	if (n > 9)
		ft_unsign(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	ft_len(unsigned int n)
{
	int	len;

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

int	ft_print_unsignedint(unsigned int n)
{
	ft_unsign(n);
	return (ft_len(n));
}
