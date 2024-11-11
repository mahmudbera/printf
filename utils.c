#include "ft_printf.h"

static size_t ft_strlen(char *str)
{
	size_t len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

static size_t ft_numlen(unsigned long num, size_t base_len)
{
	size_t len;

	len = 0;
	while (num > base_len)
	{
		num /= base_len;
		len++;
	}
	return (len);
}

char *ft_putbase(unsigned long num, char *base)
{
	size_t num_len;
	size_t base_len;
	char   *str;

	base_len = ft_strlen(base);
	num_len = ft_numlen(num, base_len);
	str = (char *)malloc((num_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[num_len] = '\0';
	while (num_len)
	{
		num_len -= 1;
		str[num_len] = base[num % base_len];
		num /= base_len;
	}
	return (str);
}