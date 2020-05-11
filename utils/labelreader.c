char *labelreader(char *label)
{
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
    return "null";
}

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
    return "null";
}
