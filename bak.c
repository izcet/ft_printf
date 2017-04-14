// returns the count of characters printed to the screen
// not including \0
// return -1 on error

	
	va_list		ap2;
	char		*s;
	int			len;

	len = ft_strlen(str);
	va_start(ap, str);
	while (*str)
	{
		va_copy(ap2, ap);
		va_end(ap2);
		if (*str == 's')
		{
			s = va_arg(ap, char *);
			ft_putendl(s);
		}
		else if (*str == 'd')
		{
			 ft_putnbr(va_arg(ap, int));
		}
		else if (*str == 'c')
			ft_putchar((char)va_arg(ap, int));
		str++;
	}
	va_end(ap);
	return (len);
}
