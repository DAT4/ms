char *labelreader(char *label)
{
    /* When the labelreader function is called, the program opens the file sym.txt
    that was generated earlier in the runtime of the program. The labelreader function will then
    compare the input string to the labels in the sym.txt and if it finds a match will then return the machine code
    for the instruction on the same line as the label.
     */
    char *binary = "";
    binary = (char *) malloc(100);
    char str[1000];
    char *file = "out/sym.txt";
    FILE *f;
    f = fopen(file, "r");
    while (fgets(str, 1000, f))
    {
        char *p = strtok(str, " ");
        char *array[100];
        int i = 0;
        while (p != NULL)
        {
        	array[i++] = p;
        	p = strtok(NULL, " ");
        }
        if (strcmp(array[0], label) == 0)
        {
            strcat(binary,array[2]);
            return binary;
        }
    }
    return NULL;
}

/* The lbl2addr function will behave in much the same way as labelreader() but instead of returning
the machine code of the instruction on the same line as the label, will return the address of the label
So this can be used in instructions like BR where the PCoffset is a requirement. 
 */
char *lbl2addr(char *label)
{
    char str[1000];
    char *file = "out/sym.txt";
    FILE *f;
    f = fopen(file, "r");
    while (fgets(str, 1000, f))
    {
        char *p = strtok(str, " ");
        char *array[100];
        int i = 0;
        while (p != NULL)
        {
        	array[i++] = p;
        	p = strtok(NULL, " ");
        }
        if (strcmp(array[0], label) == 0)
        {
            return array[1];
        }
    }
    return NULL;
}
