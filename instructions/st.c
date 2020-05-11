char *st(char *array[], int line)
{
    char *binary = "";
    binary = (char *) malloc(100);
    int i = 0;
    char *ret = "";
    ret = converter(array[0]);
    strcat(binary, ret);
    ret = converter(array[1]);
    strcat(binary, ret);

    char *label = lbl2addr(array[2]);
    puts(label);
    if (strcmp(label, "null")==0)
    {
        ret = holger(array[2],5);
    	strcat(binary, ret);
		return binary;
    }
    else
    {
        char str[20] = "";
        strcat(str, label);
        int addr = (int)strtol(str, NULL, 16);
        int diff = addr - line;
        char *put;
        sprintf(put, "#%d", diff);
        ret = holger(put,5);
        strcat(binary, ret);
	    return binary;
    }
    return "ok";
}
