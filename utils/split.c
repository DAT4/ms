char *split(char str[], int line)
{
    /* Takes a string read from the file given as argument in main(), and splits
     * it into tokens based on the seperator whitespace " ".
     * */
    char *p = strtok(str, " \n");
    
    char *array[10];
    int i = 0;
    while (p != NULL)
    {
    	array[i++] = p;
    	p = strtok(NULL, " ");
    }
    
    /* Calls the function router which is a file containing all the opcodes
     * with the array and the current line we are reading offset by 0x3000 
     * */
    char *res = router(array, line);
    
    if (res == NULL)
    {
        /* If we receive NULL instead of an actual binary output
         * then do nothing.
         * */
    }
    else
    {
        /* Else write to file and free the pointer from memory
         * */
        appender(res);
        free(res);
    }
}

