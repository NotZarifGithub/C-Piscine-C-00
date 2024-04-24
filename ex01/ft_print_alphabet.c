#include <unistd.h>

void ft_print_alphabet(void)
{
    char a;

    for (a = 'a'; a <= 'z'; a++) {
        write(1, &a, 1);
    }
}

