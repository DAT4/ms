#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils/hexchar.c"
#include "utils/conv.c"
#include "utils/write.c"
#include "utils/hex.c"
#include "directives/stringz.c"
#include "directives/blkw.c"
#include "utils/bitwi.c"
#include "utils/labelreader.c"
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

/* start of the program, the main function takes a file path as an argument */
int main(int argc, char *argv[])
{
    /* The pointer to the file is defined */
    char *obj = argv[1];
    FILE *f;
    char str[MAX];
    /* Calls the clear function, which deletes and rewrites the files in the out folder */
    clear();

    if (argc < 2)
    {
        puts("\nremember to put a file!!!!\n\n");
        return 1;
    } 

    /* open the file and read each line, then the function labelfinder is
    called on each line of the file, before the while loop an int counter is
    initialized this is to keep track of where we are in the program.
    */
    f = fopen(obj, "r");
    int i = 12288;
    while (fgets(str, MAX, f))
    {
        /* Labelfinder searches through the file for labels for generating the symbol table
        and by using the input i, it can note which address to use as memory addres for the label
        knowing that int 12288 = 0x03000 in hexidecimal. 
        */
        char *res = labelfinder(str, i);
        i++;
    }

    /*After the symbol table has been constructed, the program then executes
    the split function on the file again, the split function will then look for
    keywords corrosponding to the instruction operands that are implemented in this program */
    f = fopen(obj, "r");
    i = 12288;
    while (fgets(str, MAX, f))
    {
        char *res = split(str, i);
        i++;
    }
    return 0;
}
