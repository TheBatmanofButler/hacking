#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{

    if (argc < 2)
    {
        printf("String argument required \n");
        return 1;
    }

    if (argc > 2)
    {
        printf("Too many arguments \n");
        return 1;
    }

    char *s = argv[1];
    size_t length = strlen(s);
    char stack[length];
    char *p = stack;

    while (*s != '\0')
    {
        *p = *s;
        p++;
        s++;
    }

    while (p-- + 1 != stack)
    {
        printf("%c", *p);
    }

    printf("\n");

    return 0;
}