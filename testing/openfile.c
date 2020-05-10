#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

int main(int argc, char *argv[])
{
    char *obj = argv[1];
    FILE *f;
    char str[MAX];
    char **out;

    if (argc < 2)
    {
        fputs("\nyou forgot obj!\n\n", stdout);
        return 1;
    } //if

    f = fopen(obj, "r");
    while (fgets(str, MAX, f))
    {
        printf("One new line is\n");
        printf("%s",str);
    }
    return 0;
}
