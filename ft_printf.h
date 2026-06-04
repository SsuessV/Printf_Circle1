/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyoun <suyoun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 02:46:11 by suyoun            #+#    #+#             */
/*   Updated: 2026/06/04 16:40:01 by suyoun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

size_t	ft_strlen(const char *s);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_print_nbr(int n);
void	ft_print_ptr(void *ptr);
int		ft_print_unsignedint(unsigned int n);
int		ft_hexa_lower(unsigned int n);
int		ft_hexa_upper(unsigned int n);

#endif