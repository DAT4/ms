#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "conv.c"
#include "bitwi.c"
#include "add.c"
#include "not.c"
#include "split.c"


//hej
int main()
{
    	char a_word[40] = "ADD R6, R7, R2,";
        char *res = split(a_word);
	return 0;
}
