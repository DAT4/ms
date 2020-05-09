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
    else if (strcmp(code, "LD") == 0)
    {
        return "0010";
    }
    else if (strcmp(code, "R0,") == 0)
    {
        return "000";
    }
    else if (strcmp(code, "R1,") == 0)
    {
        return "001";
    }
    else if (strcmp(code, "R2,") == 0)
    {
        return "010";
    }
    else if (strcmp(code, "R3,") == 0)
    {
        return "011";
    }
    else if (strcmp(code, "R4,") == 0)
    {
        return "100";
    }
    else if (strcmp(code, "R5,") == 0)
    {
        return "101";
    }
    else if (strcmp(code, "R6,") == 0)
    {
        return "110";
    }
    else if (strcmp(code, "R7,") == 0)
    {
        return "111";
    }
    else
    {
        /* code */
    }

    return code;
}
