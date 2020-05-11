/* Takes a string and turns it into hexidecimal */
char *hexflex(char word){
    char * outword = "";
    outword = (char *) malloc(33);
    sprintf(outword, "%04X", word);
    return outword;
}
