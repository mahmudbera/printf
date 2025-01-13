/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 13:10:21 by makarago          #+#    #+#             */
/*   Updated: 2024/12/29 15:37:03 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	ft_printf(const char *str, ...);

void	ft_putchar(char c, size_t *counter);
void	ft_putstr(char *str, size_t *counter);
void	ft_putptr(void *ptr, size_t *counter);
void	ft_putnbr(int num, size_t *counter);
void	ft_putwbase(unsigned int num, size_t *counter, char *base);
/*
void ft_putuint(unsigned int num, size_t counter);
void ft_puthex(unsigned int num, size_t *counter, char *base);
*/
char	*ft_putbase(unsigned long num, char *base);

#endif