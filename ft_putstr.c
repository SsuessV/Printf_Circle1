/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 03:05:30 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/02 22:21:15 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	if (!s)
		return (write (1, "(null)", 6));
	while (*s)
	{
		write(1, s, ft_strlen(s));
		s++;
	}
	return (ft_strlen(s));
}
