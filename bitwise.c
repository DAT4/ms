#include <stdio.h>
#include <string.h>
    
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

int main( void )
{
    	int j = -15;
    	char *res = showbits(j,1);
	printf("%s",res);

    	return 0;
}

