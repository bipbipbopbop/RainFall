#include <stdio.h>
#include <stdlib.h>

int a;

void p(char *buf)
{
    printf(buf);
}

void    v(void)
{
    char    buf[520];

    fgets(buf, 512, stdin);
	p(buf);

    if (a == 0x1025544)
        system("/bin/cat /home/user/level5/.pass");
}

int     main(void)
{
    n();
}