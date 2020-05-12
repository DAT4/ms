/* Function for handling the pseudo op .STRINGZ  
 * */
char *stringz(char *str)
{
    int i ;
    char *bin;
    char binary[1000] = "";
    int repeats = strlen(str);
    /* Repeats the for loop a number of times equal to the length of the string
     * each time the loop is executed, it takes a character and converts it into 
     * its hexidecimal representation 
     * */
    for (i=0;i<repeats;i++)
    {
        char x[30] = "x";
        char * res = hexflex(str[i]);
        strcat(x,res);
        free(res);
        bin = hex(x);
        appender(bin);
        free(bin);
    }
    /* after string has been converted into hexidecimal, append a 0 terminator to
     * the end of the string  
     * */
    appender("0000000000000000");
    return NULL;
}
