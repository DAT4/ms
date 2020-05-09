char *ld(char *array[])
{
        char binary[1000] = "";
    	int i = 0;
    	char *ret = "";
        ret = converter(array[0]);
    	strcat(binary, ret);
        ret = converter(array[1]);
    	strcat(binary, ret);
        ret = holger(array[2],5);
    	strcat(binary, ret);
        puts(binary);
		return "ok";
}
