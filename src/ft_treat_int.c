/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:07:12 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/21 20:57:40 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_treat_int(int n)
{
	char	*moji;
	int		num;

	num = 0;
	moji = ft_itoa(n);
	if (!moji)
		return (0);
	num = ft_putstr(moji);
	free(moji);
	return (num);
}

// int main()
// {
//     printf("Test 1: %d\n", ft_treat_int(1234));       // 
//     printf("Test 2: %d\n", ft_treat_int(-5678));      // 
//     printf("Test 3: %d\n", ft_treat_int(0));          // 
//     printf("Test 4: %d\n", ft_treat_int(2147483647)); // 
//     printf("Test 5: %d\n", ft_treat_int(-2147483648));// 

//     return 0;
// }