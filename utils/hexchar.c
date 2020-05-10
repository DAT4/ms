char *hexflex(char word){
    char * outword = "";
    outword = (char *) malloc(33);
    sprintf(outword, "%04X", word);
    return outword;
}
