/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 02:46:11 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/02 12:58:47 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

size_t  ft_strlen(const char *s);
int		ft_printf(const char *, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_print_nbr(int n);
int		ft_print_unsignedint(unsigned int n);


#endif