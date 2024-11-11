#include "ft_printf.h"

void ft_puthex(unsigned int num, size_t *counter, char *base)
{
	char *str;

	str = ft_putbase(num, base);
	ft_putstr(str, counter);
	free(str);
}