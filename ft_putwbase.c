/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:10:35 by makarago          #+#    #+#             */
/*   Updated: 2024/12/29 13:14:42 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putwbase(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_putbase(num, base);
	ft_putstr(str, counter);
	free(str);
}
