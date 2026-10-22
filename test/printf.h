/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:17:45 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/22 17:50:43 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

# define ABS(a) ((a<0) ? (-a) : (a))

static int	ft_putchar_arg(va_list arg);
static int	ft_putstr_arg(va_list arg);
static int	ft_putnbr_arg(va_list arg);
static int	ft_put_pos_arg(va_list arg);
int	tipe_detector(char type, va_list arg);
int	ft_printf(const char *str, ...);

#endif
