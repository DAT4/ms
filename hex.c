char *hex(char* str) 
{ 
    long int i = 1; 
    char out[16] = "";
    while (str[i]) { 
        switch (str[i]) { 
        case '0': 
            strcat(out, "0000"); 
            break; 
        case '1': 
            strcat(out, "0001"); 
            break; 
        case '2': 
            strcat(out, "0010"); 
            break; 
        case '3': 
            strcat(out, "0011"); 
            break; 
        case '4': 
            strcat(out, "0100"); 
            break; 
        case '5': 
            strcat(out, "0101"); 
            break; 
        case '6': 
            strcat(out, "0110"); 
            break; 
        case '7': 
            strcat(out, "0111"); 
            break; 
        case '8': 
            strcat(out, "1000"); 
            break; 
        case '9': 
            strcat(out, "1001"); 
            break; 
        case 'A': 
        case 'a': 
            strcat(out, "1010"); 
            break; 
        case 'B': 
        case 'b': 
            strcat(out, "1011"); 
            break; 
        case 'C': 
        case 'c': 
            strcat(out, "1100"); 
            break; 
        case 'D': 
        case 'd': 
            strcat(out, "1101"); 
            break; 
        case 'E': 
        case 'e': 
            strcat(out, "1110"); 
            break; 
        case 'F': 
        case 'f': 
            strcat(out, "1111"); 
            break; 
        default: 
            printf("\nType Fejl: %c", str[i]); 
        } 
        i++; 
    } 
    appender(out);
    return "ok";
} 
