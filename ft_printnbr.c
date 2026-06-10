/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:24:10 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/10 20:23:24 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long long	num;
	int			ret;
	int			tmp;

	num = n;
	ret = 0;
	if (num < 0)
	{
		if ((write(1, "-", 1) == -1))
			return (-1);
		ret += 1;
		num = -num;
	}
	if (num > 9)
	{
		tmp = ft_putnbr(num / 10);
		if (tmp == -1)
			return (-1);
		ret += tmp;
	}
	if (write(1, &"0123456789"[num % 10], 1) == -1)
		return (-1);
	ret += 1;
	return (ret);
}

int	ft_intlen(int n)
{
	long long	num;
	int			len;

	num = n;
	len = 0;
	if (num <= 0)
		len = 1;
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

int	ft_print_nbr(int n)
{
	ft_putnbr(n);
	return (ft_intlen(n));
}
