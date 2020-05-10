#include <stdio.h>
#include <stdlib.h>

int appender(char *binary) {
   FILE * f;
   f = fopen ("out.txt", "a");
   fprintf(f, "%s\n", binary);
   fclose(f);
   return 0;
}
