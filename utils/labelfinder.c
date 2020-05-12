char *labelfinder(char str[], int line)
{
    /* The function labelfinder first deconstructs each string of input it receives
    by splitting each element into tokens seperated by spaces " ".*/
    char *p = strtok(str, " ");
    char *array[10];
    int i = 0;
    while (p != NULL)
    {
    	array[i++] = p;
    	p = strtok(NULL, " ");
    }
    /*Here we define all strings that the problem can handle, if receive a string input
    that is not listed in the functions string array, then that means that the program has found
    a label has been found and will be stored
     */
    char *functions[30] = {
    "ADD",
    "NOT",
    "BR",
    "BRn",
    "BRz",
    "BRp",
    "BRnz",
    "BRnp",
    "BRzp",
    "BRnzp",
    "ST",
    "LD",
    "LDR",
    ".ORIG",
    ".FILL",
    ".STRINGZ",
    ".BLKW",
    ".END",
    };

    for (i = 0; i<18; i++)
    {
        if (strcmp(array[0], functions[i]) == 0)
        {
            return NULL;
        }
    }
    int j;
    /* If the labelfinder has found a string that does not match one of
    approved instructions, it then creates a new array with the values following
    the label fx: "LOOP ADD R1, R2, #-6". 
    The new array would then contain {"ADD", "R1", "R2", "#-6"}
     */
    char *newray[10];
    for (j=0;j<10;j++)
    {
        newray[j] = array[j+1];
    }
    /*The label name is stored for reference in the symbol table */
    char *key = array[0];
    /*The value of the instruction following the label is converted to binary */
    char *value = router(newray, line);
    /*The value "line" derived from our i integer in main() is converted to hex and stored as address in the symbol table */
    char x[10] = "0x";
    char hex[10];
    sprintf(hex, "%x", line);
    strcat(x,hex);
    /*The table is written using the symbols function in write.c using key as "labelname", x as "memory" 
    and value as binary representation of whatever instruction followed the label */
    symbols(key, x, value);
    free(value);
}

