#include <unistd.h>

void ft_print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++){
		write(1, &number, 1);
	}
}
