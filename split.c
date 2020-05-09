char *split(char str[])
{
    	char *p = strtok(str, " ");
    	char *array[40];
    	int i = 0;
    	while (p != NULL)
    	{
    		array[i++] = p;
    		p = strtok(NULL, " ");
    	}

    	if (strcmp("ADD", array[0]) == 0)
    	{
    		char *res = add(array);
            return res;
    	}
        else if (strcmp("NOT", array[0]) == 0)
    	{
    		char *res = not(array);
            return res;
    	}
        else if (strcmp("BRz", array[0]) == 0)
    	{
    		char *res = br(array);
            return res;
    	}
        else if (strcmp("ST", array[0]) == 0)
    	{
    		char *res = st(array);
            return res;
    	}
        else if (strcmp("LD", array[0]) == 0)
    	{
    		char *res = ld(array);
            return res;
    	}
        else if (strcmp("LDR", array[0]) == 0)
    	{
    		char *res = ldr(array);
            return res;
    	}
    	else
    	{
    		printf("fejl");
    	}
}
