char *ld(char *array[])
{
    	char *binary = "";
        binary = (char *) malloc(100);
    	int i = 0;
    	char *ret = "";
        ret = converter(array[0]);
    	strcat(binary, ret);
        ret = converter(array[1]);
    	strcat(binary, ret);
        ret = holger(array[2],5);
    	strcat(binary, ret);
		return binary;
}
