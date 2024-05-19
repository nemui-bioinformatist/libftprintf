/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:21:30 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 22:28:07 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>

int 	ft_putchar(char c);
int	ft_putnbr(unsigned long long n);
int ft_putstr(char *s);
char	*ft_itoa(int n);

#endif // LIBFT_H