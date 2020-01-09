#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char buf[132];
    FILE *fp = fopen("/home/user/end/.pass", "r");

    if (!fp || argc != 2)
    {
        return -1;
    }
    fread(buf, 1, 66, fp);
    buf[65] = 0;
    buf[atoi(argv[1])] = 0;
    fread(buf + 66, 1, 65, fp);
    fclose(fp);
    if (strcmp(buf, argv[1]) == 0)
    {
        execl("/bin/sh", "sh", NULL);
    }
    else
    {
        puts(buf + 66);
    }
    return 0;
}
