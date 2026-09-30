#include "my.h"

char *my_revstr(char *str)
{
    int start = 0;
    int end = my_strlen(str) - 1;
    char tmp;

    while (start < end) {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return str;
}
