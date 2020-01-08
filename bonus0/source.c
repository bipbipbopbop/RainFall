#include <stdio.h>
#include <string.h>
#include <unistd.h>

void    p(char *buf, char *s)
{
    char    buf1[4096];

    puts(s);
    read(0, buf1, 4096);
    *strchr(buf1,'\n') = '\0';
    strncpy(buf, buf1, 20);
}

void    pp(char *buf)
{
    char    buf1[20];
    char    buf2[20];

    p(buf1, " - ");
    p(buf2, " - ");
    strcpy(buf, buf1);

    buf[strlen(buf)/*repnz scas*/] = *" ";
    strcat(buf, buf2);
}

int        main(void)
{
    char    buf[42];

    pp(buf);
    puts(buf);

    return 0;
}
