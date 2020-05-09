char *not(char *array[])
{
        char binary[1000] = "";
    	int i = 0;
    	for (i = 0; i < 3; ++i)
    	{
    		char *ret = converter(array[i]);
    		strcat(binary, ret);
    	}
    	strcat(binary, "111111");
        puts(binary);
		return "ok";
}
