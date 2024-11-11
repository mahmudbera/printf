#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_printf(const char *a, ...);

void ft_putchar(char c, size_t *counter);
void ft_putstr(char *str, size_t *counter);
void ft_putptr(void *ptr, size_t counter);
void ft_putnbr(int num, size_t *counter);
void ft_putwbase(unsigned int num, size_t *counter, char *base);
/*
void ft_putuint(unsigned int num, size_t counter);
void ft_puthex(unsigned int num, size_t *counter, char *base);
*/
char *ft_putbase(unsigned long num, char *base);

#endif