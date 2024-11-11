#include "ft_printf.h"

void ft_putptr(void *ptr, size_t counter)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	ft_putstr("0x", counter);
	str = ft_putbase(ptr_address, "0123456789abcdef");
	ft_putstr(str, counter);
	free(str);
}