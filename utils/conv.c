/* The converter function converts the opcodes into their binary representation */
char *converter(char *code)
{
    if (strcmp(code, "ADD") == 0)
    {
        return "0001";
    }
    else if (strcmp(code, "NOT") == 0)
    {
        return "1001";
    }
    else if (strcmp(code, "ST") == 0)
    {
        return "0011";
    }
    else if (strcmp(code, "BR") == 0)
    {
        return "0000000";
    }
    else if (strcmp(code, "BRnzp") == 0)
    {
        return "0000111";
    }
    else if (strcmp(code, "BRnz") == 0)
    {
        return "0000110";
    }
    else if (strcmp(code, "BRn") == 0)
    {
        return "0000100";
    }
    else if (strcmp(code, "BRzp") == 0)
    {
        return "0000011";
    }
    else if (strcmp(code, "BRp") == 0)
    {
        return "0000001";
    }
    else if (strcmp(code, "BRnp") == 0)
    {
        return "0000101";
    }
    else if (strcmp(code, "BRz") == 0)
    {
        return "0000010";
    }
    else if (strcmp(code, "LD") == 0)
    {
        return "0010";
    }
    else if (strcmp(code, "LDR") == 0)
    {
        return "0110";
    }
    else if (strncmp(code, "R0,",2) == 0)
    {
        return "000";
    }
    else if (strncmp(code, "R1,",2) == 0)
    {
        return "001";
    }
    else if (strncmp(code, "R2,",2) == 0)
    {
        return "010";
    }
    else if (strncmp(code, "R3,",2) == 0)
    {
        return "011";
    }
    else if (strncmp(code, "R4,",2) == 0)
    {
        return "100";
    }
    else if (strncmp(code, "R5,",2) == 0)
    {
        return "101";
    }
    else if (strncmp(code, "R6,",2) == 0)
    {
        return "110";
    }
    else if (strncmp(code, "R7,",2) == 0)
    {
        return "111";
    }
    else
    {
        return NULL;
    }

    return code;
}
