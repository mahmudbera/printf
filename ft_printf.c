#include "ft_printf.h"

static void	ft_write(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr(va_arg(va, void *), counter);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putwbase(va_arg(va, unsigned int), counter, "0123456789");
	else if (*str == '%')
		ft_putchar(*str, counter);
	else if (*str == 'X')
		ft_putwbase(va_arg(va, unsigned int), counter, "0123456789ABCDEF");
	else if (*str == 'x')
		ft_putwbase(va_arg(va, unsigned int), counter, "0123456789abcdef");
}

int		ft_printf(const char *str, ...)
{
	va_list va;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_write(va, (char *)str, &counter);
		}else
			ft_putchar(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}