#include <stdio.h>
#include <stdlib.h>

int run(void) 
{
    fwrite("Good... Wait what?\n", 1, 19, stdout);
    return system("/bin/sh");
}

int main()
{
    char str[64];

    gets(str);
    return (0);
}