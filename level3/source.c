#include <stdio.h>
#include <stdlib.h>

int a = 0;

void    v(void)
{
    char    buf[520];

    fgets(buf, 512, stdin);
    printf(buf);

    if (a == 0x40)
    {
        fwrite("Wait what?!\n", 12, 1, stdout);
        system("/bin/sh");
    }
}

int     main(void)
{
    v();
}