/* The function for the ADD instruction 
 * */
char *add(char *array[])
{
	/* Allocates memory to the binary value, that will be appended to the out.txt file 
     * */
    char *binary = "";
    binary = (char *) malloc(100);
    
	/* As the ADD instruction will always have four operands following the opcode, the
     * program first checks whether a "#" appears in front of the fourth argument which
     * means that this instruction has a number value, and not a registry.
     * */
    char *end = strstr(array[3], "#");
    int i = 0;
    
	/* If the fourth argument is a number then execute the following code 
     * */
    if (end)
    {
	    /* Convert the first elements of the instruction i.e "ADD", "RX" and "RY" , and
         * append them to the binary output
         * */
    	for (i = 0; i < 3; ++i)
    	{
    		char *ret = converter(array[i]);
    		strcat(binary, ret);
    	}

		/* Append 1 after the opcode and the registry representations, signifying to the
         * computer that an immidiate number is coming 
         * */
    	strcat(binary, "1");

		/* Call the function holger with the fourth argument and a number signifying ahe
         * length of the numbers representation in binary 
         * */
    	char *res = holger(array[3],1);
    	strcat(binary, res);
        return binary;
    }

	/* If we are not dealing with an immidiate value then convert "ADD", "RX", "RY" to
     * machine code and then append 000, and lastly append "RZ".
     * */
   else
   {
   	    for (i = 0; i < 3; ++i)
   	    {
   	    	char *ret = converter(array[i]);
   	    	strcat(binary, ret);
   	    }
   	    strcat(binary, "000");
   	    char *retur = converter(array[3]);
   	    strcat(binary, retur);
           return binary;
   }
}
