#include "ft_printf.h"

void ft_putuint(unsigned int num, size_t counter)
{
	char *str;

	str = ft_putbase(num, "0123456789");
	ft_putstr(str, counter);
	free(str);
}