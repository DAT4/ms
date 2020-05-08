#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

char *converter(char *code)
{
    if (strcmp(code, "ADD") == 0)
    {
        return "0001";
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
    else
    {
        /* code */
    }

    return code;
}

void foo(char *array[])
{
    char binary[1000];
    char *end = strstr(array[3], "#");
    int i = 0;
    if (end)
    {
        for (i = 0; i < 2; ++i)
        {
            char *ret = converter(array[i]);
            strcat(binary, ret);
        }
        strcat(binary, "1");
        //HUSK NOGET HER
        printf("%s", binary);
    }
    else
    {
        for (i = 0; i < 2; ++i)
        {
            char *ret = converter(array[i]);
            strcat(binary, ret);
        }
        strcat(binary, "000");
        char *retur = converter(array[3]);
        strcat(binary, retur);
        printf("%s", binary);
    }
}

void split(char *str)
{
    int i = 0;
    char *p = strtok(str, " ");
    char *array[3];
    while (p != NULL)
    {
        array[i++] = p;
        p = strtok(NULL, " ");
    }

    if (strcmp("ADD", array[0]) == 0)
    {
        printf("%ld", sizeof(array));
        foo(array);
    }
    else
    {
        printf("fejl");
    }
}

int main(int argc, char *argv[])
{
    char a_word[MAX_LEN];

    printf("Input an LC3 assembly instruction:\n");
    scanf("%[^\n]", a_word);
    split(a_word);
    //printf("The corresponding machine instruction is: \n");
    //printf("%s\n", a_word);
    return 0;
}