#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *language;

int greetuser(char *s)
{
    char buf[20];

    if (language == (char*)1)
    {
        strcpy(buf, "Hyvää päivää ");
    }
    else if (language == (char*)2)
    {
        strcpy(buf, "Goedemiddag! ");
    }
    else if (language == (char*)0)
    {
        strcpy(buf, "Hello ");
    }
    strcat(buf, s);
    return puts(buf);
}

int main(int argc, char **argv)
{
    int ret = 1;
    char buf2[32];
    char buf1[40];

    if (argc != 3)
    {
        return 1;
    }
    strncpy(buf1, argv[1], 40);
    strncpy(buf2, argv[2], 32);
    language = getenv("LANG");
    if (language != NULL)
    {
        if (memcmp(language, "fi", 2))
        {
            language = (char*)1;
        }
        else if (memcmp(language, "nl", 2))
        {
            language = (char*)2;
        }
        /* Programs return nb of bytes written */
        ret = greetuser(buf1);
    }
    return ret;
}
