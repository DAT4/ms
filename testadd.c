#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "conv.c"
#include "bitwi.c"
#include "add.c"
#include "not.c"

int main()
{
    	char *a_word[] = {"NOT","R0,","R1,"};
    	char *result = not(a_word);
	printf("%s", result);
	return 0;
}
