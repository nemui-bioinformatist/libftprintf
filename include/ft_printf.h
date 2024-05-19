/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:46:17 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/19 22:45:34 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	ft_treat_char(int c);
int	ft_treat_str(char *str);
int	ft_treat_int(int n);
int	ft_treat_uint(unsigned int n);
int	ft_treat_p(unsigned long long p);
int	ft_treat_hexa(unsigned int n, char c);

#endif // FT_PRINTF_H