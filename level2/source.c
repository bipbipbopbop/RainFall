#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *p()
{
    char str[64];
    void *p_ret;

    fflush(stdout);
    gets(str);
    p_ret = __builtin_return_address(0);
    if ((unsigned long)p_ret & 0xb000000)
    {
        printf("(%p)\n", p_ret);
        exit(1);
    }
    puts(str);
    return strdup(str);
}

int main()
{
    p();
}
