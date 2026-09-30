#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("Usage: ./reverse <text>\n");
        return 84;
    }
    my_putstr(my_revstr(av[1]));
    my_putstr("\n");
    return 0;
}
