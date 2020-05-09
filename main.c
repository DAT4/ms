#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "split.c"


int main(int argc, char *argv[])
{
    char a_word[40] = "ADD R0, R1, #-15";

    printf("Input an LC3 assembly instruction:\n");
    //scanf("%[^\n]", a_word);
    split(a_word);
    //printf("The corresponding machine instruction is: \n");
    //printf("%s\n", a_word);
    return 0;
}
