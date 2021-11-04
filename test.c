#include "./src/ft_printf.h"

int	main(void)
{
	int	count_print = 0;
	char	chaar = 'b';

	count_print = ft_printf("%%:%%");
	ft_printf("\n");
	printf("count_print valeur:%i\n", count_print);

	count_print = ft_printf("c:%c", chaar);
	ft_printf("\n");
	printf("count_print valeur:%i\n", count_print);

	count_print = ft_printf("s:%s", "bonjour");
	ft_printf("\n");
	printf("count_print valeur:%i\n", count_print);


/*
	int	printf_recu = 0;
	char *str = "coucou";
	print_int(5, 7, 4, 2, 3, 1);

	printf_recu = printf("strlen:%zu", ft_strlen(str));
	printf("\nprintf_recu:%i\n", printf_recu);

	ft_printf("hello");
	ft_printf("hello %c\n");
	ft_printf("hello %s\n");
	ft_printf("hello %p\n");
	ft_printf("hello %i\n");
	ft_printf("hello %u\n");
	ft_printf("hello %x\n");
	ft_printf("hello %%\n");
*/
	return (0);
}
