/* Function for handling the instruction with LD as opcode 
 * */
char *ld(char *array[], int line)
{
    char *binary = "";
    binary = (char *) malloc(100);
    int i = 0;
    char *ret = "";

    /* First the program converts the opcode LD to machine code 
     * */
    ret = converter(array[0]);
    strcat(binary, ret);
    
    /* Then the program converts the destination registry into its binary representation 
     * */
    ret = converter(array[1]);
    strcat(binary, ret);

    /* Then the program checks whether the value to be loaded is a label, or a value 
     * */
    char *label = lbl2addr(array[2]);
    if (strcmp(label, "null")==0)
    {
        /* If its a value convert it into binary 
         * */
        ret = holger(array[2],5);
        strcat(binary, ret);
	    return binary;
    }
    else
    {
        /* If it is label as the second argument, the program then converts its address into
         * decimal and compares it with the current line of the code we are operating on it 
         * then converts the difference between the two into binary to get the PCoffset
         * */
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
    return NULL;
}
