/* The router contains the calls to all the functions based on the value of the
 * first item in the array 
 * */

char *router(char *array[], int line)
{
    /* Call the function based on the element stored in array[0]
     * */
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
    else if (strncmp("BR", array[0],2) == 0)
	{
		char *res = br(array, line);
        return res;
	}
    else if (strcmp("ST", array[0]) == 0)
	{
		char *res = st(array, line);
        return res;
	}
    else if (strcmp("LD", array[0]) == 0)
	{
		char *res = ld(array, line);
        return res;
	}
    else if (strcmp("LDR", array[0]) == 0)
	{
		char *res = ldr(array, line);
        return res;
	}
    else if (strcmp(".ORIG", array[0]) == 0)
	{
		char *res = hex(array[1]);
        return res;
	}
    else if (strcmp(".FILL", array[0]) == 0)
	{
		char *res = hex(array[1]);
        return res;
	}
    else if (strcmp(".STRINGZ", array[0]) == 0)
	{
		char *res = stringz(array[1]);
        return res;
	}
    else if (strcmp(".BLKW", array[0]) == 0)
	{
		char *res = blkw(array);
        return res;
	}
    else if (strcmp(".END", array[0]) == 0)
	{
		appender("");
        return NULL; 
	}
	else
	{
        /* Assuming proper syntax and an understanding of the limitations of the code, 
         * if the value of array[0] does not equal one of the values listed above, then
         * it must be a label the program then calls the labelreader, to reference the
         * symbol table on what to do next.
         * */
        char *res = labelreader(array[0]);
        return res;
	}
}
