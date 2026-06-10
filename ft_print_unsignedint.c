/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignedint.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:46:07 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/10 20:21:33 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsign(unsigned int n)
{
	int	len;
	int	tmp;

	len = 0;
	if (n > 9)
	{
		tmp = ft_unsign(n / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (write(1, &"0123456789"[n % 10], 1) == -1)
		return (-1);
	len += 1;
	return (len);
}

int	ft_un_len(unsigned int n)
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
	return (ft_un_len(n));
}
