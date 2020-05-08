#include <stdio.h>
#include <string.h>
#include "split.c"
#include <stdlib.h>

int main()
{
    	char *a_word = "ADD R0, R1, #-15";
    	split(a_word);
	return 0;
}
