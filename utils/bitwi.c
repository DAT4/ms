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

char * holger(char str[], int size)
{
    puts(str);
    puts("HUHUHU^^^^");
	//Det her er mærkeligt!!!
	char lort[] = "cant delete me";
	char out[] = "";
	char num[] = "";
	int i;
	char minus = '-';
	int p = strlen(str);

	if (str[1] == minus)
	{
		for (i = 2; i < p; i++){
			strncat(num, &str[i],1);
		}
		int number = atoi(num);
		return showbits(-number,size);
	}
	else
	{
		for (i = 1; i < p; i++){
			strncat(num, &str[i],1);
		}
		int number = atoi(num);
		return showbits(number,size);
	}
	
    return "fejl";
}
