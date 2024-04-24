#include <unistd.h>

void ft_print_reverse_alphabet(void) 
{
	char a;

	for (a = 'z'; a >= 'a'; a--) {
		write(1, &a, 1);
	}
}

