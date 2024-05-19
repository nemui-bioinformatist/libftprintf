/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:50:21 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/19 16:17:05 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>

int ft_printf(const char *input, ...);
int ft_treat_char(char c);
int ft_treat_str(char *str);
int ft_treat_int(int n);
int ft_treat_uint(unsigned long long n);
int ft_treat_p(unsigned long long p);
int ft_treat_hexa(unsigned int n, char c);

#endif // LIBFTPRINTF_H