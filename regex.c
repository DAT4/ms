#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char * showbits( unsigned int x, int size )
{
	char out[] = "";
	unsigned char word[12] = "";
    	for (int i = (sizeof(int) + size ) - 1; i >= 0; i--)
    	{
    		char bub = (x & (1u << i) ? '1' : '0');
    	    	strncat(out,&bub,1);
    	}
	char *output = out;
	return output;
}

char * holger(int argc, char *argv[])
{
	char out[] = "";
	char num[] = "";
	char str[] = "#-15";
	int i;
	int p = strlen(str);
	char minus = '-';

	if (str[1] == minus)
	{
		for (i = 2; i < p; i++){
			strncat(num, &str[i],1);
		}
		int number = atoi(num);
		return showbits(-number,1);
	}
	else
	{
		for (i = 2; i < p; i++){
			strncat(num, &str[i],1);
		}
		int number = atoi(num);
		return showbits(number,1);
	}
	
    return 0;
}
