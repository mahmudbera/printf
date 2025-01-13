/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:10:30 by makarago          #+#    #+#             */
/*   Updated: 2024/12/29 15:40:10 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	if (!ptr)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	ft_putstr("0x", counter);
	str = ft_putbase(ptr_address, "0123456789abcdef");
	ft_putstr(str, counter);
	free(str);
}
