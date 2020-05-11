char *labelfinder(char str[], int line)
{
    char *p = strtok(str, " ");
    char *array[10];
    int i = 0;
    while (p != NULL)
    {
    	array[i++] = p;
    	p = strtok(NULL, " ");
    }
    char *functions[11] = {
    "ADD",
    "NOT",
    "BRz",
    "ST",
    "LD",
    "LDR",
    ".ORIG",
    ".FILL",
    ".STRINGZ",
    ".BLKW",
    ".END"
    };

    for (i = 0; i<10; i++)
    {
        if (strcmp(array[0], functions[i]) == 0)
        {
            return "no lable";
        }
    }
    printf("must be a label!\n");
    int j;
    char *newray[10];
    for (j=0;j<10;j++)
    {
        newray[j] = array[j+1];
    }
    char *key = array[0];
    char *value = router(newray);
    char hex[10];
    sprintf(hex, "%x", line);
    symbols(key, hex, value);
    free(value);
}

