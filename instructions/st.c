/* Function for handling the instruction with the opcode "ST" */
char *st(char *array[], int line)
{
    char *binary = "";
    binary = (char *) malloc(100);
    int i = 0;
    char *ret = "";
    /* First the program converts the opcode and source registry into machine code */
    ret = converter(array[0]);
    strcat(binary, ret);
    ret = converter(array[1]);
    strcat(binary, ret);

    /* Then the program check whether or not store 
the value of the source registry into the location of a label
 */
    char *label = lbl2addr(array[2]);
    if (strcmp(label, "null")==0)
    {
        /* If it is not a label, then the PCoffset is genereated by converting the value into binary and storing it */
        ret = holger(array[2],5);
    	strcat(binary, ret);
		return binary;
    }
    else
    {
        /* If it is a label the program then converts its address into decimal and compares it with the current line of the code we are operating on
        it then converts the difference between the two into binary to get the PCoffset*/
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
