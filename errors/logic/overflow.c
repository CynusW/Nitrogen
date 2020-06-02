// default includes
#include <stdio.h>
#include <stdlib.h>


// external functions

char write(){
    FILE *fp;
   fp = fopen("test.txt", "w+");
   fprintf(fp, "Overflow Error -  3:29 - src/init.nit\nAn overflow error has occured and the program crashed\n");
   fprintf(fp, "for(i = 2,999,999,999; i < 3,000,000,000; i++) {}");
   fprintf(fp, "    ^^^^^^^^^^^^^^^^^^ error occured here\n\thelp: set both values under 2billion");
   fclose(fp);
}

int main(){
    write();
}