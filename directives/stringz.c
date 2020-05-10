char *stringz(char *str)
{
    int i ;
    int repeats = strlen(str);
    for (i=0;i<repeats;i++)
    {
        char x[30] = "x";
        char * res = hexflex(str[i]);
        strcat(x,res);
        free(res);
        hex(x);
    }
    hex("x0000");
    return "ok";
}
