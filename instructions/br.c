char *br(char *array[])
{
    	char *binary = "";
        binary = (char *) malloc(100);
    	int i = 0;
    	char *ret = "";
        ret = converter(array[0]);
    	strcat(binary, ret);
        ret = holger(array[1],5);
    	strcat(binary, ret);
		return binary;
}
