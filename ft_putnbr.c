/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:10:26 by makarago          #+#    #+#             */
/*   Updated: 2024/12/29 13:16:16 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_putstr("-2", counter);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar('-', counter);
		num *= -1;
	}
	if (num <= 9)
	{
		ft_putchar((num + '0'), counter);
	}
	if (num > 9)
	{
		ft_putnbr((num / 10), counter);
		ft_putnbr((num % 10), counter);
	}
}
