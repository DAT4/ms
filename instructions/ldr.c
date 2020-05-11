/* Function for handling the instruction with LDR as opcode */
char *ldr(char *array[], int line)
{
    char *ret;
    char *binary = "";
    binary = (char *)malloc(100);
    int i = 0;
    /* First the program converts the opcode aswell as 
    the destination registry and base registry into binary code.
     */
    for (i = 0; i < 3; ++i)
    {
        ret = converter(array[i]);
        strcat(binary, ret);
    }
    /* Then the program checks to see if there is a label match */
    char *label = lbl2addr(array[3]);
    puts(label);
    if (strcmp(label, "null") == 0)
    {
        /* If not convert the value into binary */
        ret = holger(array[3], 2);
        strcat(binary, ret);
        return binary;
    }
    else
    {
        /* If the offset is from a label,
        the program then converts its address into decimal and compares it with the current line of the code we are operating on
        it then converts the difference between the two into binary to get the PCoffset  
        */
        char str[20] = "";
        strcat(str, label);
        int addr = (int)strtol(str, NULL, 16);
        int diff = addr - line;
        char *put;
        sprintf(put, "#%d", diff);
        ret = holger(put, 2);
        strcat(binary, ret);
        return binary;
    }
    return "ok";
}
