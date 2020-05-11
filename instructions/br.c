/* The function br handles the instruction with the opcode BRnzp */
char *br(char *array[], int line)
{
    char *binary = "";
    binary = (char *)malloc(100);
    int i = 0;
    char *ret = "";
    /* First the program converts the opcode BR to machine code */
    ret = converter(array[0]);
    strcat(binary, ret);

    /* Then the program checks to see if the argument following the BR opcode is a label */
    char *label = lbl2addr(array[1]);
    if (strcmp(label, "null") == 0)
    /* If the label addres finder function "lbl2addr" returns null, then the PCoffset is not coming from a label
    but instead an integer value which is then converted to binary and appended
     */
    {
        ret = holger(array[1], 5);
        strcat(binary, ret);
        return binary;
    }
    else
    {
        /* If the instead it is actually a label as the second argument,
        the program then converts its address into decimal and compares it with the current line of the code we are operating on
        it then converts the difference between the two into binary to get the PCoffset
         */
        char str[20] = "";
        strcat(str, label);
        int addr = (int)strtol(str, NULL, 16);
        int diff = addr - line;
        char *put;
        sprintf(put, "#%d", diff);
        ret = holger(put, 5);
        strcat(binary, ret);
        return binary;
    }
    return "ok";
}
