#include <stdarg.h>
#include <unistd.h>
#include"libft.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	va_list ap;
	size_t sum;

	sum = 0;
	va_start(ap, str);
	while(*str)
	{
		if (*str == '%')
		{
			str++;
			if(*str == 'c')
				sum += ft_putchar_fd((char) va_arg(ap,int), STDOUT_FILENO);
			else if(*str == 's')
				sum += ft_putstr_fd(va_arg(ap, char*), STDOUT_FILENO);
			else if(*str == 'p')
				sum += ft_puthexa_fd(va_arg(ap, void*), STDOUT_FILENO);
			else if(*str == 'd')
				sum += ft_putnbr_fd(va_arg(ap,int), STDOUT_FILENO);
			else if(*str == 'i')
				sum += ft_putnbr_fd(va_arg(ap,int), STDOUT_FILENO);
			else if(*str == 'u')
				sum += ft_putunbr_fd(va_arg(ap,int), STDOUT_FILENO);
			else if(*str == 'x')
				sum += ft_putihexa_fd(va_arg(ap,int), STDOUT_FILENO,1);
			else if(*str == 'X')
				sum += ft_putihexa_fd(va_arg(ap,int), STDOUT_FILENO,0);
			else if(*str == '%')
				sum += ft_putchar_fd('%', STDOUT_FILENO);
			// else
			// 	return(1);
		}
		else
			{ft_putchar_fd(*str, STDOUT_FILENO);
			sum++;}
		str++;
	}
	va_end(ap);
	return(sum);
}


// int main(void)
// {
// 	//ft_printf("%%\n%X\n%x\n%u\n%i\n%d\n%p\n%s\n%c\n", 25, 333, 7, -10, 289, (void *) "asdf", "banana", 'a');
// 	//printf("%%\n%X\n%x\n%u\n%i\n%d\n%p\n%s\n%c\n", 25, 333, 7, -10, 289, (void *) "asdf", "banana", 'a');
// 	 printf("%d\n", ft_printf(" %p %p \n", 0, 0));
// 	 printf("%d\n", printf(" %p %p \n", 0, 0));

// 	return(0);
// }