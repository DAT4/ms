#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "utils/hexchar.c"
#include "utils/conv.c"
#include "utils/write.c"
#include "utils/hex.c"
#include "directives/stringz.c"
#include "directives/blkw.c"
#include "utils/bitwi.c"
#include "instructions/add.c"
#include "instructions/br.c"
#include "instructions/ld.c"
#include "instructions/st.c"
#include "instructions/ldr.c"
#include "instructions/not.c"
#include "utils/router.c"
#include "utils/split.c"
#include "utils/labelfinder.c"

#define MAX 1000

//
int main(int argc, char *argv[])
{
    char *obj = argv[1];
    FILE *f;
    char str[MAX];
    char **out;
    clear();

    if (argc < 2)
    {
        puts("\nremember to put a file!!!!\n\n");
        return 1;
    } 

    f = fopen(obj, "r");
    int i = 12288;
    while (fgets(str, MAX, f))
    {
        char *res = labelfinder(str, i);
        i++;
    }

    f = fopen(obj, "r");
    i = 12288;
    while (fgets(str, MAX, f))
    {
        char *res = split(str, i);
        i++;
    }
    return 0;
}
