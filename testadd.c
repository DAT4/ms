#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "add.c"

int main()
{
    	char *a_word[] = {"ADD","R0,","R1,","#-15"};
    	char *result = add(a_word);
	printf("%s", result);
	return 0;
}
