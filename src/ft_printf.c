/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:14:53 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/21 20:56:04 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ft_printf_check(char c, va_list args)
{
	int	num;

	num = 0;
	if (c == 'd' || c == 'i')
		num += ft_treat_int(va_arg(args, int));
	else if (c == 'c')
		num += ft_treat_char(va_arg(args, int));
	else if (c == 's')
		num += ft_treat_str(va_arg(args, char *));
	else if (c == 'p')
		num += ft_treat_p(va_arg(args, unsigned long long));
	else if (c == 'u')
		num += ft_treat_uint(va_arg(args, unsigned int));
	else if (c == 'x')
		num += ft_treat_hexa(va_arg(args, unsigned int), c);
	else if (c == 'X')
		num += ft_treat_hexa(va_arg(args, unsigned int), c);
	else if (c == '%')
	{
		num += 1;
		write(1, "%", 1);
	}
	return (num);
}

static int	ft_count_output(char *save, va_list args)
{
	int	num;

	num = 0;
	while (*save)
	{
		if (*save == '%')
			num += ft_printf_check(*(++save), args);
		else
		{
			write(1, save, 1);
			num++;
		}
		save++;
	}
	return (num);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	char	*save;
	int		num;

	save = ft_strdup(input);
	if (!save)
		return (0);
	va_start(args, input);
	num = ft_count_output(save, args);
	va_end(args);
	free(save);
	return (num);
}

// #include <stdio.h>
// #include <limits.h>

// int main()
// {
// 	int a;
// 	int b;
// 	a = ft_printf(" %u ", 12345678);
// 	printf("  this is len:");
// 	printf("%d\n" , a);

// 	b = printf(" %u ", 12345678);
// 	printf("  this is len:");
// 	printf("%d\n" , b);
// 	system("leaks a.out");
// }