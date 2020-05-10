#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "hexchar.c"
#include "conv.c"
#include "write.c"
#include "hex.c"
#include "stringz.c"
#include "blkw.c"
#include "bitwi.c"
#include "add.c"
#include "br.c"
#include "ld.c"
#include "st.c"
#include "ldr.c"
#include "not.c"
#include "split.c"

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
        char *res = split(str);
    }
    return 0;
}
