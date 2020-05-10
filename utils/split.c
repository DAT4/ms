char *split(char str[])
{
    	char *p = strtok(str, " ");
    	char *array[10];
    	int i = 0;
    	while (p != NULL)
    	{
    		array[i++] = p;
    		p = strtok(NULL, " ");
    	}
        char *res = router(array);
        if (strcmp(res, "ok") == 0)
        {
            puts("it was one of those lables");
        }
        else
        {
            appender(res);
            puts(res);
            free(res);
        }
}
