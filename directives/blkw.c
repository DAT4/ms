char *blkw(char *array[])
{
    int i ;
    int repeats = atoi(array[1]);
    for (i=0;i<repeats;i++)
    {
        //puts(array[2]);
        hex(array[2]);
    }
        return "ok";
}
