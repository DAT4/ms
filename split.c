#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "add.c"

void split(char *str)
{
    	char *p = strtok(str, " ");
    	char *array[3];
    	int i = 0;
    	while (p != NULL)
    	{
    		array[i++] = p;
    		p = strtok(NULL, " ");
    	}

    	if (strcmp("ADD", array[0]) == 0)
    	{
    		printf("inside ADD");
    		//add(array);
    	}
    	else
    	{
    		printf("fejl");
    	}
}

int main()
{
    	char *a_word = "ADD R0, R1, #-15";
    	split(a_word);
	return 0;
}
