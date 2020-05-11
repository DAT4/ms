char *labelreader(char *label)
{
    char str[1000];
    f = fopen("../out/sym.txt", "r");
    while (fgets(str, 1000, f))
    {
        char *p = strtok(str, " ");
        char *array[10];
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
    return "not a label";
}
