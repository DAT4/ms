char *ldr(char *array[], int line)
{
    	char *binary = "";
        binary = (char *) malloc(100);
    	int i = 0;
    	for (i = 0; i < 3; ++i)
    	{
    		char *ret = converter(array[i]);
    		strcat(binary, ret);
    	}
    	char *res = holger(array[3],2);
    	strcat(binary, res);
        return binary;
}
