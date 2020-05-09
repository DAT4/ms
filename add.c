char *add(char *array[])
{
    	char binary[1000] = "";
    	char *end = strstr(array[3], "#");
    	int i = 0;
    	if (end)
    	{
    		for (i = 0; i < 3; ++i)
    		{
    			char *ret = converter(array[i]);
    			strcat(binary, ret);
    			strcat(binary, "-");
    		}
    		strcat(binary, "1");
    		strcat(binary, "-");
    		char *res = holger(array[3],1);
    		strcat(binary, res);
            puts(binary);
    	}
    	else
    	{
    		for (i = 0; i < 3; ++i)
    		{
    			char *ret = converter(array[i]);
    			strcat(binary, ret);
    		}
    		strcat(binary, "000");
    		char *retur = converter(array[3]);
    		strcat(binary, retur);
    		puts(binary);
    	}
}
