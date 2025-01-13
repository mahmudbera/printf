/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:10:32 by makarago          #+#    #+#             */
/*   Updated: 2024/12/29 13:13:31 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_putbase(num, "0123456789");
	ft_putstr(str, counter);
	free(str);
}
