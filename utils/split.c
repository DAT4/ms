char *split(char str[], int line)
{
    /* Takes a string read from the file given as argument in main(), and splits it into tokens 
based on the seperator whitespace " ".
 */

    char *p = strtok(str, " ");
    char *array[10];
    int i = 0;
    while (p != NULL)
    {
        array[i++] = p;
        p = strtok(NULL, " ");
    }
    /* Calls the function router which is a file containing all the opcodes
    with the array and the current line we are reading offset by 0x3000
     */
    char *res = router(array, line);

    /* If we receive the string "ok" instead of an actual binary output
    then do nothing.
     */
    if (strcmp(res, "ok") == 0)
    {
    }
    /* If we receive actual binary output, call the function appender which writes
    the machine code to the out.txt file. Then free the memory used to store the variable res.
     */
    else
    {
        appender(res);
        free(res);
    }
}
