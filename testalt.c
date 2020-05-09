#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "conv.c"
#include "bitwi.c"
#include "add.c"
#include "br.c"
#include "ld.c"
#include "st.c"
#include "ldr.c"
#include "not.c"
#include "split.c"

//
int main()
{
    char a_word[40] = "ST R2, #-7";
    char *res = split(a_word);
    return 0;
}
