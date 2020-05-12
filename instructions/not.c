/* Function for dealing with the instruction with the opcode "NOT" 
 * */
char *not(char *array[])
{
    char *binary = "";
    binary = (char *) malloc(100);
    int i = 0;
	/* First the program converts the opcode and the registries into
     * machine code 
     * */
    for (i = 0; i < 3; ++i)
    {
    	char *ret = converter(array[i]);
    	strcat(binary, ret);
    }
	/* Then the program appends "111111" to the end of the instruction 
     * to signify "NOT" 
     * */
    strcat(binary, "111111");
	return binary;
}
