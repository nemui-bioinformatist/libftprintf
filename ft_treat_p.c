/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:54:24 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 12:55:57 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

static char *ft_int_to_base(char *moji, unsigned long long num)
{
	if (num < 16)
	{
		if(num % 16 < 10)
			*moji = num % 16 + '0';
		else
			*moji = num % 16 + 'a';
		moji++;
	}
	else if(num >= 16)
	{
		num = num / 16;
		ft_int_to_base(moji, num);
		if(num % 16 < 10)
			*moji = num % 16 + '0';
		else
			*moji = num % 16 + 'a';
		moji++;
	}
	*moji = '\0';
	return(moji);
}

static char *ft_point_base(unsigned long long p)
{
	char *moji;
	int count;
	unsigned long long num;

	count = 0;
	num = p;
	if (p < 16)
		count++;
	else if(p >= 16)
	{
		p = p / 16;
		ft_point_base(num);
		count++;
	}
	moji = (char *)malloc((count + 1) * sizeof(char));
	if (!moji)
		return(NULL);
	ft_int_to_base(moji, num);
	return(moji);	
}

int ft_treat_p(unsigned long long p)
{
	int num;
	char *moji;
	moji = ft_point_base(p);
	if (!moji)
		return(0);
	write(1, "0x", 2);
	num = 2;
	num += ft_putstr_count(moji);
	free(moji);
	return(moji);
}
