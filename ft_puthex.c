/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:10:25 by makarago          #+#    #+#             */
/*   Updated: 2024/12/29 13:14:28 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_putbase(num, base);
	ft_putstr(str, counter);
	free(str);
}
