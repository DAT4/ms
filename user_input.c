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

int main(void)
{
    char str[40];
    printf("Input an LC3 assembly instruction:\n");
    scanf("%[^\n]", str);
    printf("The corresponding machine instruction is: \n");
    char *res = split(str);
    return 0;
}
