char *br(char *array[])
{
        char binary[1000] = "";
    	int i = 0;
    	char *ret = "";
        ret = converter(array[0]);
    	strcat(binary, ret);
        ret = holger(array[1],5);
    	strcat(binary, ret);
        puts(binary);
		return "ok";
}
