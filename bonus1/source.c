#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int n = atoi(argv[1]);
    char buf[40]; /* equivalent to int buf[10] */

    if (n <= 9)
    {
        memcpy(buf, argv[2], n * 4);
        if (n == 0x574f4c46)
        {
            execl("/bin/sh", "sh", NULL);
        }
        return 0;
    }
    return 1;
}
