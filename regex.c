#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char * binbin(int n)
{
	int a[10];
	int i;    
	char word[2];
	char out[4] = "";

	for(i=0;n>0;i++)    
	{    
		a[i]=n%2;    
		n=n/2;    
	}    


	for(i=i-1;i>=0;i--)    
	{    
		sprintf(word, "%d", a[i]);
		strcat(out, word);
	}    
	printf("%s\n",out);    
	return out;  
}

char * nibnib(char *binbin)
{
	char out[4] = "";
	int p = strlen(binbin);
	int i;
	for (i = 0; i < p; i++)
	{
		if(strcmp(binbin[i],"0")==0)
		{
		strcat(out,"1");
		}
		else if(strcmp(binbin[i],"1")==0)
		{
		strcat(out,"0");
		}
	}
	return out;
}

int main(int argc, char *argv[])
{
	char out[] = "";
	char num[] = "";
	char str[] = "#-12345678";
	int i;
	int p = strlen(str);
	char minus = '-';
	printf("%s\n\n",num);

	if (str[1] == minus)
	{
		for (i = 2; i < p; i++){
			strncat(num, &str[i],1);
		}
		int number = atoi(num);
		printf("%d\n",number);
	}
	else
	{
		printf("2");
		//for (i = 1; i < p; i++){
		//	printf("%c\n",str[i]);
		//	strcat(out,"8");
		//}
	}
	
    return 0;
}
