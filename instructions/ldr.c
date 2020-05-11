char *ldr(char *array[], int line)
{
    char * ret;
    char *binary = "";
    binary = (char *) malloc(100);
    int i = 0;
    for (i = 0; i < 3; ++i)
    {
        ret = converter(array[i]);
        strcat(binary, ret);
    }

    char *label = lbl2addr(array[3]);
    puts(label);
    if (strcmp(label, "null")==0)
    {
    	ret = holger(array[3],2);
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
        ret = holger(put,2);
        strcat(binary, ret);
	    return binary;
    }
    return "ok";
}
