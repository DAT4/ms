/* Function for handling the pseudo op .STRINGZ  */
char *stringz(char *str)
{
    int i;
    int repeats = strlen(str);
    /* Repeats the for loop a number of times equal to the length of the string
    each time the loop is executed, it takes a character and converts it into its
    hexidecimal representation
     */
    for (i = 0; i < repeats; i++)
    {
        char x[30] = "x";
        char *res = hexflex(str[i]);
        strcat(x, res);
        free(res);
        hex(x);
    }
    /* after string has been converted into hexidecimal, append a 0 terminator to the end of the string  */
    hex("x0000");
    return "ok";
}
