/* The function for handling the pseudo op .BLKW */
char *blkw(char *array[])
{
    int i ;
    char binary[1000] = "";
    int repeats = atoi(array[1]);
    /* The program takes the second argument of the array as the number of addresses
    to set aside in memory, then calls the hex function which severs as this programs .FILL
    operation. And runs it a number of times equal to the value of array[1], and stores the value of array[2]
    in all of the addresses.
     */
    for (i=0;i<repeats;i++)
    {
        char *bin = hex(array[2]);
        strcat(binary, bin);
        free(bin);
        if (i < repeats-1)
        {
            strcat(binary, "\n");
        }
    }
    appender(binary);
    return "void";
}
