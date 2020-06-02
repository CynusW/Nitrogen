// default includes
#include <stdio.h>
#include <stdlib.h>


// external functions


// generate is a function that generates errors
// such as a random line and time.
char generate() {
   char full[1800];
   char ln1[255] = "Overflow Error - 3:26 - src/init.nit";
   char ln2[255] = "An overflow error has occured and the program crashed";
   char ln3[255] = "for(i = 2,999,999,999,999; i < 3,000,000,000; i++) {}";
   char ln4[255] = "    ^^^^^^^^^^^^^^^^^^^^^ error occured here";
   char ln5[255] = "        help: set both values under 2.14 Billion.";
   strcat(full, ln1);
   strcat(full, ln2);
   strcat(full, ln3);
   strcat(full, ln4);
   strcat(full, ln5);
   return full;
}


// writes it to the file
void write(){
    FILE *fp;
   fp = fopen("test.txt", "w+");
   fprintf(fp, generate());
   fclose(fp);
}

int main(){
    write();
}