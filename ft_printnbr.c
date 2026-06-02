/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:24:10 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/02 11:48:45 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	long    num;

	num = nb;
	if (num < 0)		
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

int ft_len(int n)
{
	long    num;
	int     len;

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

int ft_print_nbr(int n)
{
	ft_putnbr(n);
	return (ft_len(n));
}