#include <stdio.h>
#include <stdlib.h>

int appender(char *binary) {
   FILE * f;
   f = fopen ("out/out.txt", "a");
   fprintf(f, "%s\n", binary);
   fclose(f);
   return 0;
}

int symbols(char *key, char *addr, char *value) {
   FILE * f;
   f = fopen ("out/sym.txt", "a");
   fprintf(f, "%s %s %s\n", key, addr, value);
   fclose(f);
   return 0;
}

int clear() {
   FILE * f;
   f = fopen ("out/sym.txt", "w");
   fclose(f);
   f = fopen ("out/out.txt", "w");
   fclose(f);
   return 0;
}
