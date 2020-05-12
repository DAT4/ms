#include <stdio.h>
#include <stdlib.h>

/* The appender function takes a string input, and appends it to the end of the
 * out.txt file which serves as the output for the machine code. 
 * */
int appender(char *bin) {
   FILE * f;
   f = fopen ("out/out.txt", "a");
   fprintf(f, "%s \n", bin);
   fclose(f);
   return 0;
}

/* The symbols function takes a string input, and appends it to the end of the
 * sym.txt file, which serves as the output for the symbol table for the program.
 * */
int symbols(char *key, char *addr, char *value) {
   FILE * f;
   f = fopen ("out/sym.txt", "a");
   fprintf(f, "%s %s %s \n", key, addr, value);
   fclose(f);
   return 0;
}

/* Clear deletes all content in the out.txt and sym.txt files, so any leftover
 * text from previous runs of the code are not stored
 * */
int clear() {
   FILE * f;
   f = fopen ("out/sym.txt", "w");
   fclose(f);
   f = fopen ("out/out.txt", "w");
   fclose(f);
   return 0;
}
